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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL){
            return NULL;
        }
        if (head->next==NULL){
            return head;
        }
        ListNode* curr=head;
        ListNode* next=curr->next;
        
        while(curr->next!=NULL){
            if (curr->val==next->val){
                curr->next=next->next;
                next->next=NULL;
                delete next;
                next=curr->next;
            }
            else{
                curr=curr->next;
                next=next->next;
                // return curr;
            }
        }
        return head;
    }
};