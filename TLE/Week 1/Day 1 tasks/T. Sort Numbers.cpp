#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    //ascending order
    if((a>=c) && (c>=b)){
        cout<<b<<'\n'<<c<<'\n'<<a;
    }
    else if((a>=b) && (b>=c)){
        cout<<c<<'\n'<<b << '\n' <<a;
    } 
    else if((b>=a) && (a>=c)){
        cout<<c<<'\n'<<a << '\n' <<b;
    }
    else if((b>=c) && (c>=a)){
        cout<<a<<'\n'<<c << '\n' <<b; 
    }
    else if((c>=a) && (a>=b)){
        cout<<b<<'\n'<<a << '\n' <<c;
    }
    else if((c>=b) && (b>=a)){
        cout<<a<<'\n'<<b << '\n' <<c;
    }
    
    //blank line 
    cout << endl <<endl;
    //same order input read
    cout << a <<'\n'<< b <<'\n' << c;  

    return 0;
}