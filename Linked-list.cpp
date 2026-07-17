#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        this->next = NULL;
    }
};
int main() {
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(7);
    head->next->next->next = new Node(11);
    cout << head->data << endl;
    cout << head->next->data << endl;
    cout << head->next->next->data << endl;
    cout << head->next->next->next->data << endl;

    return 0;
}