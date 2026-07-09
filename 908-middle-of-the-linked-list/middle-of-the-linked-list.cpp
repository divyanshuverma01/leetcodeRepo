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
    ListNode* middleNode(ListNode* head) {
        int len=0;
        
        ListNode* curr=head;
        while(curr!=NULL){
            len++;
            curr=curr->next;

        }
        int middle=len/2+1;
        // if(middle%2==0){
        //     middle=(middle/2)+1;
        // }
        // else{
        //     middle=middle/2+1;
        // }
        
        // ListNode* prev=NULL;
        ListNode* mid=head;
        while(middle!=1){
            // prev=mid;
            mid=mid->next;
            middle--;
            
        }  
        return mid;

        
    }
};