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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* curr=head;
        while(curr != NULL){
        count++;
        curr = curr->next;
}
        if(n>count) return head;
        if(n==count)
        return head->next;
        int k = count - n - 1;
        curr = head;
        while(k--){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};