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
        ListNode* l3=new ListNode();
        ListNode* head3=l3;
        int carry=0;
        while(l1 || l2 || carry){
            ListNode* newVal=new ListNode();
            int x=l1?l1->val:0;
            int y=l2?l2->val:0;
            newVal->val=x+y+carry;
            carry=0;
            if(newVal->val>9){
                carry=newVal->val/10;
                newVal->val=newVal->val%10;
                
            }
            
            head3->next=newVal;
            head3=head3->next;
            l1=l1?l1->next:0;
            l2=l2?l2->next:0;

            
            

        }
        return l3->next;

    }
};