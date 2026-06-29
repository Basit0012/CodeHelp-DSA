// Write a program that will take input of your name and age and return whether you are adult or not

#include<iostream>
using namespace std;

int main(){
    string name;
    int age = 0;
    cout<<"Enter Your Name: "<<endl;
    cin>>name;
    cout<<"Enter Your Age: "<<endl;
    cin>>age;
    // if(age <= 0 or age > 150){
    //     cout<<"invalid age"<<endl;
    //     cout<<"Retry Adding Your Age";
    //     if(age <= 0 or age > 150){
    //         cout<<"Re-Enter Your age";
    //         cin>>age;
    //         cout<<"Your age is valid";
    //     }

    // }
    while (age <= 0 || age > 150)
    {
        cout<<"Your age is inValid Re-Enter Your age"<<endl;
        cin>>age;
    }
    
    if(age>=18){
        cout<<"You are adult";
    }
    else cout<<"Your are not 18+";

    
    // while (age>0)
    // {
    //     cout<<"Your age is Valid";
    //     cin>>age;
    // }

    
    return 0;
}