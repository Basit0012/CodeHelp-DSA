#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i < 20; i++){
        // if(i>10)continue;
        cout<<i<<endl;
        if(i<10)continue;
        else break;
        // if(i>5)continue;
        // if(i==10)break;
    }
    return 0;
}