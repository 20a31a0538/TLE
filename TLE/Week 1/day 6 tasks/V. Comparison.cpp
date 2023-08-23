#include <iostream>
 
using namespace std;
#define long long int;
 
int main()
{
    int a,b;
    char c;
    
    cin >> a >> c >> b;
    if(c == '>'){
        if(a > b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }else if(c == '<'){
        if(a < b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }else if(c == '='){
        if(a == b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }else{
        cout << "Wrong";
    }
    
 
    return 0;
}