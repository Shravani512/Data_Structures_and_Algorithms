
// https://practice.geeksforgeeks.org/problems/minimum-depth-of-a-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
  public:
    int findDepth(Node* root)
    {
        if(root==NULL)return NULL;
        if(root->left==NULL && root->right==NULL)return 1;   //if left right both null return 1
        if(root->left==NULL)return 1+findDepth(root->right);   //if left NULL return 1+min height from right
        if(root->right==NULL) return 1+findDepth(root->left);    //if right NULL return 1+min height from left
        return 1+min(findDepth(root->left),findDepth(root->right));   //both not NULL return 1+min of left and right tree 
    }
    
    
    int minDepth(Node *root) {

        // BFS

        // queue<Node*> q;
        // q.push(root);
        // int cnt=0;
        // while(!q.empty())
        // {
        //     int n=q.size();
        //     cnt++;
        //     for(int i=0;i<n;i++)
        //     {
        //         Node* node=q.front();
        //         q.pop();
        //         if(node->left==NULL && node->right==NULL)return cnt;
        //         if(node->left!=NULL)q.push(node->left);
        //         if(node->right!=NULL)q.push(node->right);
        //     }
        // }
        // return cnt;
        
        // DFS

        return findDepth(root);
        
    }
};