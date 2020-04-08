#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long maxpair(vector<long> arr,int n)
{
 /*	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(arr[j-1]<arr[j])
				swap(arr[j-1],arr[j]);
		}
 */
	sort(arr.begin(),arr.end(),greater<long>());
	return (long long)(arr[0] * arr[1]);
}


int main()
{
 	int n,a;
	vector<long> arr;

	cin>>n;
	for(int i=0;i<n;i++)
		{
			cin>>a;
			arr.push_back(a);
		}

	cout<<maxpair(arr,n);
	return 0;
}
