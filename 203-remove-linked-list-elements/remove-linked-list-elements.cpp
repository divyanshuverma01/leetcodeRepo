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
    // ListNode* delHead(ListNode* head,int val,ListNode* prev){
    //     if(head->val==val){
    //             prev=head;
    //             head=head->next;
    //             prev->next=NULL;
    //             delete prev;
    //     }
    //     return head;
    // }
    // ListNode* 
    ListNode* removeElements(ListNode* head, int val) {
        if (head==NULL) return head;
        ListNode* temp=head;
        ListNode* prev =NULL;
        if(temp->val==val){
                prev=temp;
                temp=temp->next;
                prev->next=NULL;
                delete prev;
                temp=removeElements(temp,val);
                return temp;
        }
        else{
            prev=temp;
            temp=temp->next;
            head->next=removeElements(temp,val);
            return head;
        }
        // return head;
        
        
        return head;
    }
};



