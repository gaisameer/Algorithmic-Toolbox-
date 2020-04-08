#include <iostream>
#include <string>
#include <algorithm>
using std::string;
using namespace std;

int edit_distance(const string &str1, const string &str2) {
  //write your code here

  int a[101][101];	
  int m = str1.size();
  int n = str2.size();

  for(int i=0;i<101;i++)
	  a[0][i] = a[i][0] = i;

  for(int i=1;i<=m;i++)
  {
	  for(int j=1;j<=n;j++)
	  {
		  if( str1[i-1] == str2[j-1] )
			  a[i][j] = a[i-1][j-1];

		  else
		  {
			  a[i][j] =1 + min(min(a[i-1][j],a[i][j-1]),a[i-1][j-1]);
			
		 /*      a[i][j] = a[i-1][j-1];
		       
		       if(a[i][j] > a[i-1][j])
		        a[i][j] = a[i-1][j];
		      
			if(a[i][j] > a[i][j-1])
		 	a[i][j] = a[i-1][j];

			a[i][j]++;	*/	
		  }

	  }
  } 


/* for(int i=0;i<=m;i++)
 {
	 for(int j=0;j<=n;j++)
		 cout<<a[i][j]<<" ";
	 cout<<"\n";
 }*/

  return a[m][n];
}  

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
