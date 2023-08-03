// https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTab=1

void pre(int &ans,BinaryTreeNode<int> *root)
{
    if(root==NULL)return;
    pre(ans,root->left);
    if(root->right==NULL&& root->left==NULL) ans++;
    pre(ans,root->right);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    //preorder traversal
    int ans=0;
    pre(ans,root);
    return ans;
}