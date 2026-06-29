// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i==0|| i==2|| i==4 || j==0 || j==2 || j==4)
            {
                 cout<<"* ";
            }else
            {
                 cout<<"  ";
            }
           
        }
        cout<<endl;
       
    }

    return 0;
}