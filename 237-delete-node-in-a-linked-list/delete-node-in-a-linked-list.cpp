/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node==NULL) return;
        ListNode* temp=node;
        ListNode* next=node->next;
        ListNode* prev=NULL;

        // while(temp!= NULL){
            

        // }
        prev=temp;
        temp->val=next->val;
        temp=temp->next;
        next=next->next;
        prev->next=next;
        delete temp;

    }
};