
// https://practice.geeksforgeeks.org/problems/children-sum-parent/1

class Solution{
    public:
    bool solve(Node* root)
    {
        if(root==NULL || (root->left==NULL && root->right==NULL))
        {
            return true;
        }
        int left,right;
        if(root->left!=NULL)left=root->left->data;
        else left=0;
        
        if(root->right!=NULL) right=root->right->data;
        else right=0;
        
        return(left+right==root->data && solve(root->left) && solve(root->right));
    }
    
    
    int isSumProperty(Node *root)
    {
     // Add your code here
        bool ans=solve(root);
        if(ans==true) return 1;
        else return 0;
    }
};