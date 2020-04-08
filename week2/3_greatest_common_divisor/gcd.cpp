#include <iostream>
using namespace std;

long long gcd_naive(long long a, long long b) {
  long long c;
  long long mx=a,mn=b;	
  while(mx != 0)
  {     c=mx;
	mx=max(mx,mn);
	mn=min(c,mn);
	mx=mx%mn;
  }

  
  return mn;
}

int main() {
  long long a, b;
  cin >> a >> b;
  cout << gcd_naive(a, b) << std::endl;
  return 0;
}
