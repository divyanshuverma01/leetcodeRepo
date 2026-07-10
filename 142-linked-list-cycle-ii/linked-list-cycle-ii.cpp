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
    bool loopExist(ListNode* head,ListNode* &slow,ListNode* &fast){
        
        while(fast!=NULL){
            fast=fast->next;
            if (fast!=NULL){
                fast=fast->next;
                slow=slow->next;
                if(fast==slow){
                    return true;
                }
            }
        }
        return false;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        bool isLoop=loopExist(head,slow,fast);
        if (isLoop==true){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;

            }
            return fast;

        }
        return NULL;
    }
};