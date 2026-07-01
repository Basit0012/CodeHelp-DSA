#include<iostream>
using namespace std;

int natural(int sum){
    int total = 0;
    for(int i = 1;i<=sum;i++){
        total += i;
    }
    return total;
} 
int main(){
    int sum;
    cout<<"The sum of the Nth number: ";
    cin>>sum;
    cout<< natural(sum);

}
