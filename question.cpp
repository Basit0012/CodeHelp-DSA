#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}
int substract(int a, int b){
    return a - b;
}
int main(){
    int a, b;
    cin>> a >> b;
    cout<< "Addition = " << add(a, b)<<endl;
    cout<< "Substraction = " << substract(a, b)<<endl;
}