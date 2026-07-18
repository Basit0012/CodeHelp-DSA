// Linked List Insertion At Beginning
// Solved
// Difficulty: EasyAccuracy: 67.99%Submissions: 28K+Points: 2
// You are given the head of a Singly Linked List and a value x, insert that value x at the beginning of the LinkedList and return the head of the modified Linked List.

// Examples :

// Input: x = 1,
    
// Output: 1 -> 2 -> 10
// Explanation: We can see that 1 is inserted at the beginning of the linked list.
    
// Input: x = 1,
    
// Output: 1 -> 2 -> 3 -> 4 -> 5
// Explanation: We can see that 1 is inserted at the beginning of the linked list.
       
// Constraints:
// 1 ≤ number of nodes ≤ 105
// 1 ≤ node->data, x ≤ 103

#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Solution class
class Solution {
public:
    Node* insertAtFront(Node* head, int x) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        return head;
    }
};

// Function to insert at end
void insertAtEnd(Node*& head, int x) {
    Node* newNode = new Node(x);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Create Linked List: 10 -> 20 -> 30
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Original List: ";
    printList(head);

    Solution obj;

    // Insert 5 at front
    head = obj.insertAtFront(head, 5);

    cout << "After Insertion at Front: ";
    printList(head);

    return 0;
}