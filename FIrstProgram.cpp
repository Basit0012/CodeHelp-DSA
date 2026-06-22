#include <iostream>
using namespace std;

int main(){
    int age;
    int FriendAge;
    cout<<"Enter Your Age: "<<endl;
    cin>>age;
    cout<<"Enter Your Friend Age: "<<endl;
    cin>>FriendAge;
    cout<<"Your Age is: "<< age<<endl;
    cout<<"Your Friend Age is: "<< FriendAge<<endl;
    if(age>18 && FriendAge>18){
        cout<<"Both Are Adults";
    }else if(age>=18 or FriendAge>=18){
        cout<<"one of them is adult";
    }
    else{
        cout<<"None of them is adult";
    }
}
