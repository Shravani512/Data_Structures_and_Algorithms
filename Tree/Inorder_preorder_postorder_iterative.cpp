
// inorder
// https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/1
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int>ans;
        stack<Node*> s;
        Node* curr=root;
        while(curr || !s.empty())
        {
            while(curr)   
            {
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            ans.push_back(curr->data);
            curr=curr->right;
        }
        
        return ans;
    }
};


//preorder
// https://practice.geeksforgeeks.org/problems/preorder-traversal-iterative/1

class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        vector<int> v;
        Node* curr=root;
        stack<Node*> sk;
        while(curr || !sk.empty())
        {
            while(curr)
            {
                sk.push(curr);
                v.push_back(curr->data);
                curr=curr->left;
            }
            curr=sk.top();
            sk.pop();
            curr=curr->right;
        }
        
         return v;
    }
};