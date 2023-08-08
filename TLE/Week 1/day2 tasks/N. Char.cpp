#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if(ch >= 65 && ch <=96){   //upper to lower
        cout << char(tolower(ch));
    }
    else{
        cout << char(toupper(ch));
    }

    return 0;
}