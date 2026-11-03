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
