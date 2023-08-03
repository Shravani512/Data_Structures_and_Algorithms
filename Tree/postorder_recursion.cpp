// https://practice.geeksforgeeks.org/problems/postorder-traversal/1

void post(vector<int> &ans,Node* root)
    {
        if(root==NULL) return;
        post(ans,root->left);
        post(ans,root->right);
        ans.push_back(root->data);
    }
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>ans;
        post(ans,root);
        return ans;
}
