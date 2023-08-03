// https://practice.geeksforgeeks.org/problems/sum-tree/1

class Solution
{
    public:
    
    int sumtree(Node* root,bool &flag)
    {
        if(root==NULL)return 0;
        if(root->left==NULL && root->right==NULL) return root->data;
        
        int left=sumtree(root->left,flag);
        int right=sumtree(root->right,flag);
        if(root->data !=(left+right))flag=false;
        
        return left+right+root->data;
    }
    bool isSumTree(Node* root)
    {
        bool flag=true;
        sumtree(root,flag);
        if(flag==false) return false;
        else return true;
    } 
};