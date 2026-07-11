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
    int lenOfList(ListNode* head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;


    }
    ListNode* delNode(ListNode* head,int k){
        
        
        ListNode* temp=head;
        ListNode* prev=NULL;
        if (k==1){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }

        while(k>1 && temp->next!=NULL){
            // prev=temp;
            // if(){
                prev=temp;
            temp=temp->next;
            k--;

            // }
            
            
            



        }
        // if(temp->next==NULL) 
        prev->next=temp->next?temp->next:NULL;
        temp->next=NULL;
        delete temp;
        temp=prev->next?prev->next:NULL;
        
        return head;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL|| head->next==NULL)return NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        int len=lenOfList(head);
        int k =len-n+1;
        
        head=delNode(head,k);
        return head;

    }
};