// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
int main() {
    Node* head = new Node(1);
    Node* tail = head;
    for(int i = 1;i<50;i+=6){
        tail->next = new Node(i);
        tail = tail->next;
    }
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr= curr->next ;
    }

    return 0;
}