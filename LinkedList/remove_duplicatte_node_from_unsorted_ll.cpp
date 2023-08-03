//https://www.codingninjas.com/studio/problems/remove-duplicates-from-unsorted-linked-list_1069331?source=youtube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&leftPanelTab=1


// will even have to check if cycle is present or not
Node *removeDuplicates(Node *head)
{
    if(head==NULL)return NULL;

    Node* ref=head;
    map<int,bool> visited;
    visited[head->data]=true;
    
    while(head->next!=NULL)
    {
        if(visited[head->next->data])
        {
            Node* temp=head->next;
            head->next=temp->next;
            temp->next=NULL;
        }
        else{
            head=head->next;
            visited[head->data]=true;
        }
    }
    return ref;
}