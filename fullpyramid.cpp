#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){//this will print (n-i) spaces
            cout<<"  ";
        }
        for(int k=1;k<=(2*i)-1;k++){//this will print (2*n)-i stars
            cout<<" *";

        }
        cout<<endl;
    }
    return 0;
}