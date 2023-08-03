// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *ans = head;
        if (!head)
            return head;

        while (head->next)
        {
            if (head->val == head->next->val)
            {
                head->next = head->next->next;
            }
            else
                head = head->next;
        }
        return ans;
    }
};



// solution 2

Node * removeDuplicates(Node *head)
{
    if(head==NULL) return head;
    Node* ret=head;

    while(head->next!=NULL)
    {
        if(head->next->data==head->data)
        {
            Node* temp=head->next;
            while(temp->data==head->data && head!=NULL)
            {
                if(temp->next!=NULL)temp=temp->next;
                else{
                    head->next=NULL;
                    return ret;
                }
            }
            head->next=temp;
        }
        head=head->next;
    }

    return ret;
}