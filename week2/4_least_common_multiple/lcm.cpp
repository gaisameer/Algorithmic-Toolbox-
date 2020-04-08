#include <iostream>
using namespace std;

long long lcm_naive(long long a, long long b) {
 
  if(!a || !b)	return 0;	
  long long c;
  long long mx=a,mn=b;
  while(mx != 0)
  {     c=mx;
        mx=max(mx,mn);
        mn=min(c,mn);
        mx=mx%mn;
  }


  return a*b / (mn);

}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
