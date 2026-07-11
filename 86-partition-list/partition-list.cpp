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
    ListNode* partition(ListNode* head, int x) {
        if (head==NULL || head->next==NULL) return head;
        ListNode* greaterDummy=new ListNode(0);
        ListNode* lesserDummy=new ListNode(0);
        ListNode* lesser=lesserDummy;
        ListNode* greater=greaterDummy;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=NULL;
            if(curr->val<x){
                lesser->next=curr;
                lesser=curr;
            }
            else{
                greater->next=curr;
                greater=curr;
            }
            curr=next;

        }
        lesser->next=greaterDummy->next;
        return lesserDummy->next;

        
        
        
    }
};