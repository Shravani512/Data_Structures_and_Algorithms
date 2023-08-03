// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// just remove 1st node and insert at end for the given k times
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(head==NULL) return NULL;
        
        Node* tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        
        while(k--)
        {
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            tail->next=temp;
            tail=temp;
        }
        
        return head;
    }
};