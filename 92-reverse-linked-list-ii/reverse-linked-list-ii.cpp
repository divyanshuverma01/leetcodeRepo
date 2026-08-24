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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=new ListNode();
        temp->next=head;
        ListNode* prevLeft=temp;
        ListNode* currNode=head;
        ListNode* prev=NULL;
        int val=right-left+1;
        for(int i=0;i<left-1;i++){
            prevLeft=prevLeft->next;
            currNode=currNode->next;

        }
        ListNode* newHead=currNode;
        for(int i=0;i<val;i++){
            ListNode* next=currNode->next;
            currNode->next=prev;
            prev=currNode;
            currNode=next;
            // next=next->next;
        }
        newHead->next=currNode;
        prevLeft->next=prev;


        
       
    return temp->next;

    }
};