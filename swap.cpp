//Create a function to Swap the value of two variables 
#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cout<<"Enter Number A: ";
    cin>>n;
    int m;
    cin>>m;
    swap(m,n);
    cout<<n;
    cout<<m;
return 0;
}