#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;
    
    if((ch >=48 && ch <= 64)){
        cout << "IS DIGIT";
    }
    else{
        cout << "ALPHA" << endl;
        if(ch >=65 && ch <= 96){
            cout << "IS CAPITAL";
        }
        else {
            cout << "IS SMALL";
        }
        
    }
    

    return 0;
}