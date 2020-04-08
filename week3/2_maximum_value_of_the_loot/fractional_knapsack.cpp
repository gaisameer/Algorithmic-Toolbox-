#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using namespace std;

double get_optimal_value(double capacity, vector<int> weights, vector<int> values, int n) {
  cout<<"\nyey function mmmm....";
  double val = 0;
  double a=0;
  cout<<"function called";
  for(int i=0;i<n;i++)
	  for(int j=i;j<n;j++)
	  {
		  cout<<"..";
		  if(values[j]/weights[j] < values[j+1]/weights[j+1])
		  {
			  swap(values[j],values[j+1]);
			  swap(weights[j],weights[j+1]);
		  }
	  }
  cout<<"\nloop completed";
  
  int i=0;
  while(i<n)
  {
	  if(!capacity)
		  break;
	  a =double(min(double(weights[i]),capacity));
	  capacity-=a;
	  val+= a * (values[i]/weights[i]);
	  i++;
  }

  return val;
}

int main() {
  int n;
  double capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  cout<<"about to call the function\n";
  double optimal_value = get_optimal_value(capacity, weights, values, n);
  cout<<"\n back in main";
  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
