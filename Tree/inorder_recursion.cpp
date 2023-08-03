void in(vector<int> &ans,Node* root)
{
    if(root==NULL) return;
    post(ans,root->left);
    ans.push_back(root->data);
    post(ans,root->right);
}
vector <int> postOrder(Node* root)
{
    vector<int>ans;
    in(ans,root);
    return ans;
}