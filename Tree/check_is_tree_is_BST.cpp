// https://practice.geeksforgeeks.org/problems/check-for-bst/1


class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool solve(Node* root)
    {
        if(root==NULL||(root->right==NULL && root->left==NULL))
        {
            return true;
        }
        bool flag1,flag2;
       
        if(root->left==NULL||root->left->data<root->data) flag1=true;
        else if(root->left->data>root->data ) flag1=false;
        
        
        if(root->right==NULL||root->right->data> root->data && root->right!=NULL) flag2=true;
        else if(root->right->data<root->data)flag2=false;
        
        return((flag1&&flag2) && solve(root->left) && solve(root->right));
    }
    
    
    bool isBST(Node* root) 
    {
        // Your code here
        return solve(root,INT_MIN,INT_MAX);
    }
};