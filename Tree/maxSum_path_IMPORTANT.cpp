
// https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// O(n)
class Solution {
  public:
    
    int findSum(Node* root,int &maxSum)
    {
        if(root==NULL) return 0;
         int left=findSum(root->left,maxSum);
         int right=findSum(root->right,maxSum);
         
         int singleMax=max(max(left,right)+root->data,root->data);
         int total_max=max(singleMax,left+right+root->data);
         
         maxSum=max(maxSum,total_max);
         return max(max(left,right)+root->data,root->data);
    }
    int findMaxSum(Node* root)
    {
        // int sum=0;
        int maxSum=INT_MIN;
        findSum(root,maxSum);
        return maxSum;
    }
};
