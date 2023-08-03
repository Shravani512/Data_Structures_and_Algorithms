
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int x)
    {
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(Node* root)
{
    cout<<"enter data"<<endl;
    int data;
    cin>>data;
    root=new Node(data);

    if(data==-1) return NULL;

    cout<<"enter data at left:"<<data<<endl;
    root->left=buildTree(root->left);

    cout<<"enter data at right:"<<data<<endl;
    root->right=buildTree(root->right);

    return root;
}

int main()
{
    Node * root=NULL;
    root=buildTree (root);
    return 0;
}