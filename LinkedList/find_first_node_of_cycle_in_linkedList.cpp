// https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1

// floyd's algorithm to detect cycle
class Solution
{
    public:
    Node* findFirst(Node* head,Node*fast)
    {
        while(head!=fast)
        {
            head=head->next;
            fast=fast->next;
        }
        return head;
    }
    int findFirstNode(Node* head)
    {
        if(!head)return -1;
        
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)fast=fast->next;
            if(slow==fast){
                Node*first=findFirst(head,fast);
                return first->data;
            }
        }
        return -1;
    }
};

// solution 2 using visited map
class Solution
{
    public:
    int findFirstNode(Node* head)
    {
        if(head==NULL) return -1;
        map<Node*,int>visited;
        
        while(head!=NULL)
        {
            if(visited[head]==1) return head->data;
            visited[head]=1;
            head=head->next;
        }
        return -1;
    }
};