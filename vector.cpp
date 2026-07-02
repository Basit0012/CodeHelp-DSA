#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Take input of n elements of a vector and print it.
    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i = 0; i<n;i++){
        cin>>nums[i];
    }
    for(int i = 0; i<n;i++){
        cout<< nums[i] << " ";
    }
    return 0;
}