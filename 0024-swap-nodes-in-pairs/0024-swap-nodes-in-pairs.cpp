/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL or head->next==NULL)return head;
        ListNode* newhead = head->next;
        ListNode* curr1 = head;
        ListNode* curr2 = head->next;
        ListNode* prev = NULL;
        while(curr2 != NULL){
            ListNode* nm=curr2->next;
            curr2->next=curr1;
            curr1->next=nm;
            if(prev!=NULL) prev->next=curr2;//connecting previous node to new swapped pair
            prev=curr1;//updating rhe previous node
            curr1=curr1->next;//going to next node
            if(curr1 != NULL)curr2=curr1->next;//curr1 null check as we have moved it to next
            else curr2=NULL;
        }
        return newhead;
    }
};