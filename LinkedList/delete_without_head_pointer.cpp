
// https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// just swap the given node value with the next node value now the next node with the given value can be easily deleted

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       int t=del->data;
       del->data=del->next->data;
       del->next->data=t;
       Node*temp=del->next;
       del->next=temp->next;
       temp->next=NULL;
    }
};