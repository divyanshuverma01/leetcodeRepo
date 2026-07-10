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
    bool len(ListNode* head,int k){
        int size=0;
        ListNode* temp=head;
        while(size!=k+1 && temp!=NULL){
            temp=temp->next;
            size++;

        }
        if(size<k){
            return false;
        }
        return true;
    }
    ListNode* revKelement(ListNode* head,int k){
        if(!len(head,k)){
            return head;

        }
        if (head==NULL){
            return head;
        }
        if (head->next==NULL){
            return head;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        int pos=0;
        ListNode* next=curr->next;
        while(pos!=k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            pos++;
            // prev=next;

        }
        
        ListNode* reversed=NULL;
        if(next!=NULL){
            reversed=revKelement(next,k);
            head->next=reversed;
            
        }
        return prev;
        
       
        



    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return revKelement(head,k);
    }
};