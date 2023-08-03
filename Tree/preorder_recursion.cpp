void pre(vector<int> &ans,Node* root)
    {
        if(root==NULL) return;
        ans.push_back(root->data);
        post(ans,root->left);
        post(ans,root->right);
    }
vector <int> postOrder(Node* root)
{
    vector<int>ans;
    pre(ans,root);
    return ans;
}
