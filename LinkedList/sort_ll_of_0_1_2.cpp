
// https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    
    void insertAtend(Node* & head,int k)
    {
        Node* temp=new Node(k);
        head->next=temp;
        temp->next=NULL;
        head=temp;
    }
    
    Node* segregate(Node *head) {
        
        Node* temp=head;
        Node* tailzero=new Node(-1);
        Node* startzero=tailzero;
        Node* tailone=new Node(-1);
        Node* startone=tailone;
        Node* tailtwo=new Node(-1);
        Node* starttwo=tailtwo;
        
        Node* curr=head;
        while(curr!=NULL)
        {
            int k=curr->data;
            if(k==0) insertAtend(tailzero,k);
            else if(k==1) insertAtend(tailone,k);
            else insertAtend(tailtwo,k);
            curr=curr->next;
        }
        //problem will come only when middle one ie if "one" is null else no problem
        if(startone->next!=NULL)tailzero->next=startone->next;
        else tailzero->next=starttwo->next;
        
        tailone->next=starttwo->next;
        tailtwo->next=NULL;
        head=startzero->next;
    }
};
