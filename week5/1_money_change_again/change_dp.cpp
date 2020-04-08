#include <iostream>
#include <algorithm>
using namespace std;


int get_change(int m) {
  //write your code here

  int c[3]={1,3,4},i;		//denominations of coins
  int a[3][1001];
  a[0][0]=a[0][1]=a[0][2]=0;
  for(i=1;i<=m;i++)
   	  a[0][i]=i;

  for(i=1;i<=2;i++)
  {
	for(int j=1;j<=m;j++)
	{
		if(j < c[i])
			a[i][j] = a[i-1][j];

		else
	//		a[i][j] = min(a[i-1][j],a[i][j - c[i]] + 1);
			{
				int g = a[i-1][j];
				int h = j - c[i];
				h = a[i][h] + 1;

				if(g < h)	a[i][j] = g;
				else 		a[i][j] = h;
			}
	}

/*for (int r=0;r<3;r++)
 {
         for(int b=0;b<=m;b++)
                 cout<<a[r][b]<<" ";
        cout<<"\n";
 }
cout<<"\n\n\n";*/

	
  }

/*
////////////////////////////////////////////////
 for (int r=0;r<3;r++)
 {
	 for(int b=0;b<=m;b++)
		 cout<<a[r][b]<<" ";
	cout<<"\n";
 }
///////////////////////////////////////////////
*/

  return a[2][m];
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
