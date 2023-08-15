
#include <iostream>

using namespace std;

int main()
{
    int num;
    int even_cnt =0, odd_cnt =0, pos_cnt =0, neg_cnt =0;
    cin >> num;
    int arr[num];
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }
    for(int i=0; i < num; i++){
        if(arr[i] > 0){
            pos_cnt++;
        }
        if(arr[i] < 0){
            neg_cnt++;
        }
        if(arr[i] % 2 ==0){
            even_cnt++;
        }
        else{
            odd_cnt++;
        }
    }
    cout <<"Even: " <<even_cnt <<endl;
    cout <<"Odd: " <<odd_cnt <<endl;
    cout <<"Positive: " <<pos_cnt <<endl;
    cout <<"Negative: " <<neg_cnt <<endl;

    return 0;
}