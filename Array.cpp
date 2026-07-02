// Arrays stores similar data
// Stores in contigous memory allocation => Homogenous Data
// Random Indexing  => Each element has an index
// Fixed in SIZE => Static in Nature +>Static Array
// It is a LINEAR DATA STRUCTURE
// Elements are arranged one after another 
// Contigous Memory
// Array is a collection of similar data types

#include<bits/stdc++.h>
using namespace std;
int main(){
    // Arrays
    // uses stack memory
    // int arr[8]={1,2,3,4,5,6,7,8};
    // Array using new operator
    // uses heap memory
    // int *arr1=new int[5];
    // Write a Program to take input from user and print the array and its sum
    int arr[4];
    cout<<"Enter Numbers: ";
    for(int i = 0; i< 4; i++){
        cin>>arr[i];
    }
    cout<< "Array Elements: ";
    for(int i = 0; i < 4; i++){
        cout<<arr[i] << " ";
    }
    int sum = 0;
    for(int i=0;i<4;i++){
        sum = sum + arr[i];
    }
    cout<<"\nSum = "<<sum;
}
