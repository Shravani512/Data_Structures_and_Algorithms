// https://www.codingninjas.com/studio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0


Node *findMiddle(Node *head) {
    int cnt=0;
    Node* temp=head;
    while(head!=nullptr)
    {
        cnt++;
        head=head->next;
    }
    cnt=cnt/2;
    int curr=0;
    while(curr!=cnt)
    {
        temp=temp->next;
        curr++;
    }
    return temp;
}


//using slow and fast pointer method
Node *findMiddle(Node *head) {
    Node * slow=head;
    Node * fast=head;
    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next;
        fast=fast->next;
    }
    return slow;
}