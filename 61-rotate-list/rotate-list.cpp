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
    ListNode* revList(ListNode* head,ListNode* prev){
        if(head==NULL ) return prev;
       
        ListNode* curr=head;
        ListNode* next=curr->next;
        curr->next=prev;
        prev=curr;
        
        
        return revList(next,prev);
        
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* prevHead=head;
        ListNode* prev=NULL;
        head=revList(head,prev);
        while(k>0){
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            prevHead->next=temp;
            prevHead=prevHead->next;
            k--;
        }
        head=revList(head,prev);
        return head;
        
    }
};