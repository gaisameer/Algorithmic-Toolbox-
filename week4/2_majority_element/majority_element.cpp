#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  int l,r;
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
  sort(a.begin(),a.end());
  int max=0,pos=0,curr=a[0],count=0;
  int n=right;

  for(int i=0;i<n;i++)
  {
	if(a[i] == curr)
		count++;
        else
	{
		if(count > max)		
		{
			max=count;
			pos = i-1;
		}
		
		curr = a[i]; 
		count=1;
	}
  }

  if(max > n/2)
	  return a[pos];
  else 
	  return -1;


}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
