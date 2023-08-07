#include <iostream>

using namespace std;

int main()
{
    long long n,m;
    cin >>n >> m;
    int lastDigit = n%10;
    n=n/10;
    int lastDigit2 = m%10;
    m=m/10;
    long long sum = lastDigit + lastDigit2;
    cout << sum;
    

    return 0;
}