
// https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
    Node* findMid(Node* head)
    {
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node* merge(Node* left,Node* right)
    {
        if(left==NULL) return right;
        if(right==NULL) return left;
        
        Node * curr=new Node(-1);
        Node* temp=curr;
        while(left!=NULL && right!=NULL)
        {
            if(left->data<right->data)
            {
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        
        while(left!=NULL)
        {
            temp->next=left;
            temp=left;
            left=left->next;
        }
        while(right!=NULL)
        {
            temp->next=right;
            temp=right;
            right=right->next;
        }
        return curr->next;
    }
    

    //first will find mid then will apply merge sort for left part then for right part recurssively then will merge it
    //follow anuj bhaiya video for merge sort and love babbar for merge sort in ll
    Node* mergeSort(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL)return head;
        
        Node* mid=findMid(head);
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        
        left=mergeSort(left);
        right=mergeSort(right);
        
        Node* result=merge(left,right);
        return result;
    }
};