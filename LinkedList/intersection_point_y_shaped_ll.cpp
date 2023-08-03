// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// count length of both ll1 and ll2
// store ll with bigger length in ptr1 ans other in ptr2
// find the extra length of bigger ll and travel the bigger ll till length of both ll is equal
// after that travel both ll together till ptr1!=ptr1 when it will be equal return the data

int length(Node* head)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}

int intersectPoint(Node* head1, Node* head2)
{
   int l1=length(head1);
   int l2=length(head2);
   
    Node*ptr1=head1;
    Node* ptr2=head2;
    
    int d=0;
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    
    while(d--)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL) return -1;
    }
    
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2) return ptr1->data;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}