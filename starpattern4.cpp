#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int i =0; i<n;i++){//this will decide the number of rows
        for(int j = 0; j< n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}