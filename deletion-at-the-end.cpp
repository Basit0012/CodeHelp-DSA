// Deletion at the end of a Linked List
// Solved
// Difficulty: EasyAccuracy: 51.25%Submissions: 15K+Points: 2
// Given a Linked List, delete the tail (i.e., the last node) of the Linked List and return the new head of the modified Linked List.

// Examples:

// Input:
   
// Output: 1 -> 2 -> 3 -> 4
// Explanation: After deleting tail from the given linked list, we'll be left with just 1 -> 2 -> 3 -> 4.
   
// Input:
   
// Output: 3 -> 12
// Explanation: After deleting tail from the given linked list, we'll be left with just 3 -> 12.
   
// Constraints:
// 1 ≤ number of nodes ≤ 105
// 1 ≤ node->data ≤ 105

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* removeLastNode(Node* head) {
        // Empty list
        if (head == NULL)
            return NULL;

        // Only one node
        if (head->next == NULL) {
            delete head;
            return NULL;
        }

        Node* curr = head;

        while (curr->next->next != NULL) {
            curr = curr->next;
        }

        delete curr->next;
        curr->next = NULL;

        return head;
    }
};

// Function to insert at end
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);

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

// Function to print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.removeLastNode(head);

    cout << "After Removing Last Node: ";
    printList(head);

    return 0;
}