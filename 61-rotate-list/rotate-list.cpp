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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int count=0;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            count++;
            prev=temp;
            temp=temp->next;

        }
        k = k % count;
        int s = count - k;
        // int s=abs(count-k);
        ListNode* last=prev;
        while(s>0 ){
            prev=NULL;
            prev=head;
            head=head->next;
            prev->next=NULL;
            last->next=prev;
            last=last->next;
            s--;
        }
        return head;
    }
};