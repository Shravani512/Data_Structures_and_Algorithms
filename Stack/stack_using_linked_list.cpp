#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=nullptr;
    }

    Node * head;

    void push(int data)
    {
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
    void pop()
    {
        if(head==nullptr) cout<<"stack is empty"<<endl;
        int x=head->data;
        Node * temp;
        temp=head;
        head=head->next;
        temp=nullptr;
        cout<<"poped element="<<x;
    }
    void topEle()
    {
        int x=head->data;
        cout<<"top element is="<<x;
    }
    void isEmpty()
    {
        if(head==nullptr) cout<<"stack is empty"<<endl;
        else cout<<"Stack is not empty"<<endl;
    }
};

int main()
{
    Node nd(5);
    nd.push(4);
    nd.push(3);
    nd.push(2);
    nd.push(1);

    nd.pop();
    cout<<endl;
    nd.topEle();
    cout<<endl;
    nd.isEmpty();
    cout<<endl;
}
