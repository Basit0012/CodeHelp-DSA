#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
int main(){
    Node* root=new Node(4);
    root->left=new Node(5);
    root->right=new Node(7);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;

}