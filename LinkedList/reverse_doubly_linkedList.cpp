https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

for this the prev will point the next and next will point the prev;
this shoild not be loss of reference so will store the prev in temp

Node* reverseDLL(Node * head)
{
    if(!head|| !head->next) return head;
    Node* temp=NULL;
    while(head!=NULL)
    {
        temp=head->prev;
        head->prev=head->next;
        head->next=temp;
        head=head->prev;
    }
    return temp->prev;
} 