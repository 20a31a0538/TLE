
               
#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a % 100;             // stop the storage le34 ----> le9 * le9 * le9 * le9 ---> 10^34
    b = b % 100;
    c = c % 100;
    d = d % 100;
    long long mul = a*b*c*d;
    
    int unitDigit = mul % 10;
    mul = mul/10;
    int tenDigit = mul % 10;
    
    cout << tenDigit << unitDigit;
    return 0;
}