#include <iostream>

using namespace std;

int main()
{
    double x;
    cin >> x;
    if(x >=0 && x <=25.0000){
        cout << "Interval " << "[0,25]" << endl;
    }
    else if(x > 25.00001 && x <= 50.0000000){
        cout << "Interval " << "(25,50]" << endl;
    }
    else if(x > 50.00001 && x <= 75.0000000){
        cout << "Interval " << "(50,75]" << endl;
    }
    else if(x > 75.00001 && x <= 100.0000000){
        cout << "Interval " << "(75,100]" << endl;
    }
    else{
        cout <<"Out of Intervals";
    }

    return 0;
}