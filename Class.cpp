#include <iostream>
using namespace std;

class Animal{
    private:
        string name = "Sheru";
        int age = 4;

    public:
    string Type="Animal";

    void display(){//here we are accessoing the private members using a public function
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    void set(string s, int n){ //setter function
        name = s;
        age = n;
    }
};


int main(){
    Animal dog;//This dog is an object of class Animal
    dog.display();
    cout<<endl;
    dog.Type="DOG";
    cout<<"Type: "<<dog.Type<<endl;
    
    return 0;
}