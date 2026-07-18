// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node(int val){
  this->data=val;
  next=NULL;
  }
};
int main() {
    // Write C++ code here
    // new keyword is used to allocate the memory
    // delete keyword is used to free  the memory
    Node* head=new Node(10);
    Node* tail=head;
    for(int i=15;i<40;i+=5){
        tail->next=new Node(i);
        tail= tail->next;
    }
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }

    return 0;
}