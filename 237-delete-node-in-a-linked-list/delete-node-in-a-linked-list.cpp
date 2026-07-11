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
        ListNode* temp=node->next;
        // ListNode* next=node->next;
        // ListNode* prev=NULL;

        // while(temp!= NULL){
            

        // }
        // prev=temp;
        node->val=temp->val;
        // node=node->next;
        // temp=temp->next;
        node->next=temp->next;
        // delete temp

        // node->next =next->val;
        // next=next->next;
        // prev->next=next;
        delete temp;

    }
};