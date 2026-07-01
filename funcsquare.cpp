// Write a function to check whether fiven numer is perfect square or not

#include <iostream>
using namespace std;

bool squarefunc(int n){
    for(int i = 1; i * i <= n; i++){
        if(i * i == n){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(squarefunc(n))
    cout << "Perfect Square";
    else
    cout << "Not Perfect Square";
}