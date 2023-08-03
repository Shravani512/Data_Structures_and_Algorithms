
// https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1

class Solution
{
    public:
    //Function to check if two trees are identical.
    void inorder(Node* root,vector<int> &v) {
        if(root==NULL){
            v.push_back(-1);
            return;
        }
        v.push_back(root->data);
        inorder(root->left,v);
        inorder(root->right,v);
    }
    bool isIdentical(Node *r1, Node *r2)
    {
        vector<int> v1;
        vector<int> v2;
        inorder(r1,v1);
        inorder(r2,v2);
        
        int i=0;
        int n1=v1.size(),n2=v2.size();
        if(n1!=n2) return false;
        while(i<n1)
        {
            if(v1[i]!=v2[i]) return false;
            i++;
        }
        return true;
        
    }
};