#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops, int n) {
    // write your code here

	int a=0,start=0;

	if(dist<tank)	return 0;

	for(int i=1;i<n;i++)
		if(stops[i] - stops[i-1] > tank)
			return -1;
	int i=0;
	while(i<n)
	{
		for(i=start+1;i<n;i++)
		{
			if((stops[i] - stops[start]) > tank)
			{
				++a;
				start=i-1;
			}

			if(start==n-1)
				break;
		}
	}


			

    return a;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n+2);
    stops.at(0)=0;
    for (size_t i = 1; i < n+1; ++i)
        cin >> stops.at(i);
    stops.at(n+1)=d;

    cout << compute_min_refills(d, m, stops, n+2) << "\n";

    return 0;
}
