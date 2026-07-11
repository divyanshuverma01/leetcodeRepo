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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // if(l1==NULL||l2==NULL) return l1?l1:l2;
        ListNode* l3=new ListNode();
        ListNode* head3=l3;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            ListNode* newVal=new ListNode();
            int x=0;
            int y=0;
            x=l1?l1->val:0;
            y=l2?l2->val:0;
            newVal->val=x+y+carry;
            carry=0;
            if(newVal->val>9){
                newVal->val=(newVal->val)%10;
                carry++;
            }

        
            // else{
                l3->next=newVal;
                l3=l3->next;
                if (l1) l1=l1->next;
                if (l2) l2=l2->next;


            // }
            


        } 
        return head3->next;
    }
};