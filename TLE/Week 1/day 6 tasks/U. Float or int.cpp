
#include <iostream>

using namespace std;

int main()
{
    float f;
    cin >>f;
    //typecast
    int n = f;
    //f-n ---> decimal number
    if(f-n > 0 ){
        cout << "float" <<" "<< n <<" "<< f-n;
    }else{
        cout << "int" <<" "<< n;
    }

    return 0;
}