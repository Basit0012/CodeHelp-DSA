#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(3);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(2);
    q.push(9);
    q.pop();
    q.pop();
    int size=q.size();
    for(int i=0;i<size;i++){ //6 -> 7 -> 2 -> 9
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}