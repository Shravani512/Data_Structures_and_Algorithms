// https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode *prev=NULL;
        ListNode* curr=head;
    
        while(curr!=NULL)
        {
            ListNode * forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
};


//solution using recurssion
// see https://youtu.be/ugQ2DVJJroc refer this if don't understand
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if( head==NULL ||head->next==NULL)
        {
            return head;
        }

        ListNode* newHead=reverseList(head->next);
        ListNode * nextHead=head->next;
        nextHead->next=head;
        head->next=nullptr;

        return newHead; 
    }
};