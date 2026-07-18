// Linked List End Insertion
// Solved
// Difficulty: BasicAccuracy: 43.96%Submissions: 411K+Points: 1Average Time: 20m
// You are given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the head of the modified Linked List.

// Examples :

// Input: x = 6,
   
// Output: 1 -> 2 -> 3 -> 4 -> 5 -> 6
// Explanation: We can see that 6 is inserted at the end of the linkedlist.
   
// Input: x = 1,
   
// Output: 4 -> 5 -> 1
// Explanation: We can see that 1 is inserted at the end of the linked list.
      
// Constraints:
// 0 ≤ number of nodes ≤ 105
// 0 ≤ node->data , x ≤ 103

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
    Node* insertAtEnd(Node* head, int x) {
        if (head == NULL)
            return new Node(x);

        Node* curr = head;

        while (curr->next != NULL) {
            curr = curr->next;
        }

        curr->next = new Node(x);

        return head;
    }
};

// Function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution obj;

    Node* head = NULL;

    head = obj.insertAtEnd(head, 10);
    head = obj.insertAtEnd(head, 20);
    head = obj.insertAtEnd(head, 30);
    head = obj.insertAtEnd(head, 40);

    cout << "Linked List: ";
    printList(head);

    return 0;
}