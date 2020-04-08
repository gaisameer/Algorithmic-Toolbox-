#include <iostream>
using namespace std;


long long fib(long long n,long long m) {

        long long a=1,b=0,c;
        for(int i= 2; ;i++)
        {
                c=(a+b)%m;
                b=a;
                a=c;
	

		if(a  ==1 && b ==0)
			return i-1;
		
	}
	
}

long long real_fib(long long n,long long m)
{
	long long a=1,b=0,c;

	if(n<2)
		return n;

        for(int i= 2; i<=n; i++)
        {
                c=(a+b)%m;
                b=a;
                a=c;
	}

	return c;
}




long long get_fibonacci_huge_new(long long n, long long m)
{	
	int pat = fib(n,m);
	n=n%pat;
	return real_fib(n,m) % m;
}



int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_new(n, m) << "\n";
}
