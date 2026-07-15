// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>arr,int n){
    // Write the recursive code to print array
    if(n == 0)return;
    print(arr, n - 1);
    cout << arr[n - 1] << " ";
}
int main() {
    // Write C++ code here
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    print(arr, 9);
    return 0;
}