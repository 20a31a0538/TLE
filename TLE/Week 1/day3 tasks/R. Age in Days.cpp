#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int years = num /365;
    int months = (num % 365) / 30;
    int days = (num % 365) % 30;
    cout << years <<" years" <<endl;
    cout <<months <<" months" <<endl;
    cout <<days <<" days" <<endl;
    return 0;
}