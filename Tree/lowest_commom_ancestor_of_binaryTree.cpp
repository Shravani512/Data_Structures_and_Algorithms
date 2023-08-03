// https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
        if(root==NULL) return NULL;
        if(root->data==n1 || root->data==n2) return root;
        
        Node*leftAns=lca(root->left,n1,n2);
        Node*rightAns=lca(root->right,n1,n2);
        
        if(leftAns!=NULL && rightAns!=NULL) return root;
        else if(leftAns!=NULL && rightAns==NULL) return leftAns;
        else if(leftAns==NULL && rightAns!=NULL) return rightAns;
        else return NULL;
    }
};

// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// leetcode Solution
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p || root==q) return root;
        TreeNode * left=lowestCommonAncestor(root->left,p,q);
        TreeNode * right=lowestCommonAncestor(root->right,p,q);

        if(left==NULL)return right;
        else if(right==NULL)return left;
        else return root;
    }
};