// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     queue<int>q;
//     q.push(3);
//     q.push(5);
//     q.push(6);
//     q.push(7);
//     q.push(2);
//     q.push(9);
//     q.pop();
//     q.pop();
//     int size=q.size();
//     for(int i=0;i<size;i++){ //6 -> 7 -> 2 -> 9
//         cout<<q.front()<<endl;
//         q.pop();
//     }
//     return 0;

// }

#include <iostream>
using namespace std;

class Queue {
    static const int capacity = 100;
    int arr[capacity];
    int front;
    int rear;

public:
    Queue() : front(-1), rear(-1) {}

    void enqueue(int value) {
        if (rear == capacity - 1) {
            cout << "Queue is overflow" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = value;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is underflow" << endl;
            return;
        }
        cout << arr[front] << " element removed" << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            ++front;
        }
    }

    void display() const {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
};

int main() {
    Queue obj;
    obj.enqueue(10);
    obj.display();
    obj.dequeue();
    obj.display();
    obj.dequeue();
}
