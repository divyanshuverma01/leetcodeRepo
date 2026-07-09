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
    ListNode* revList(ListNode* prev,ListNode* current){
        if(current==NULL){
            return prev;
        }
        ListNode* next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        

        
        return revList(prev,current);
        // return prev;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* current=head;
        // ListNode* nextNode=current->next;
        ListNode* rev=revList(prev,current);

        return rev; 
    }
};