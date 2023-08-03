// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
    public:
    Node* reverse(Node* &head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        Node* newHead=reverse(head->next);
        Node* nextHead=head->next;
        nextHead->next=head;
        head->next=NULL;
        
        return newHead;
    }
    
    
    void insertAtEnd(Node* &head,int x)
    {
        Node* temp=new Node(x);
        head->next=temp;
        head=temp;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first);
        Node* f=first;
        second=reverse(second);
        Node* s=second;
        Node* ans=new Node(-1);
        Node* temp=ans;
        
        int carry=0;
        while(first!=NULL && second!=NULL)
        {
            int x=carry+first->data+second->data;
            carry=x/10;
            int sum=x%10;
            insertAtEnd(ans,sum);
            first=first->next;
            second=second->next;
        }
        while(first!=NULL)
        {
            int x=first->data+carry;
            carry=x/10;
            int sum=x%10;
            insertAtEnd(ans,sum);
            first=first->next;
        }
        while(second!=NULL)
        {
            int x=second->data+carry;
            carry=x/10;
            int sum=x%10;
            insertAtEnd(ans,sum);
            second=second->next;
        }
        if(carry!=0)insertAtEnd(ans,carry);  // carry is remain after the linkedlist is reached to null try with example(l1=2,4,3  l2=9,9,9)
        temp=reverse(temp->next);// because at start we store -1 in ll so we pass from temp->next to not get that -1
        return temp;
    }
};