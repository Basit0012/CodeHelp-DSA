#include <iostream>
using namespace std;

int main(){
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[4]=50;

    arr[10]=100;

    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }
    // int brr[] = {2,3,4,5,6};

    // cout<<sizeof/sizeof(brr[0]);
}