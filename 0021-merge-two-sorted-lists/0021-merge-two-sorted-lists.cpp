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
    ListNode* mergeTwoLists(ListNode* curr1, ListNode* curr2) {
        ListNode* newhead = new ListNode(-1);
        ListNode* temp = newhead;

        while(curr1!=NULL and curr2!=NULL){
            if(curr1->val < curr2->val){
                temp->next = new ListNode(curr1->val);
                curr1=curr1->next;
            }else{
                temp->next = new ListNode(curr2->val);
                curr2=curr2->next;
            }
            temp = temp->next;
        }
        if(curr1 !=NULL)temp->next=curr1;
        else temp->next=curr2;
        return newhead->next;
    }
};