#include <iostream>

using namespace std;


int main()
{
    int test;
    cin >> test;
    
    
    
    for(int i=0;i<test; i++){
        long long l, r;
        cin >> l >> r;
        
        
        if(l > r) swap(l,r);
        l--;                      //  sum[r] - sum[l-1]   ---> gives inclusive
        long long s1 = l*(l+1)/2;
        long long s2 = r*(r + 1)/2;
        
        cout << s2 - s1 <<endl;
        
    }
    
    return 0;
}