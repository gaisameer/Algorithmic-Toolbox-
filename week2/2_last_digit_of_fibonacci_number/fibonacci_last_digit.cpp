#include <iostream>
using namespace std;
long long get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;


    if(n <= 1 )
                return  n;
	n=n%60;
        long long a=1,b=0,c;
        for(int i= 2; i<=n; i++)
        {
                c=a+b;
                b=a;
                a=c;
        }


    return c % 10;
}

int main() {
    int n;
cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    cout << c << '\n';
    }
