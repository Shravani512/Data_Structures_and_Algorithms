// https://practice.geeksforgeeks.org/problems/k-sum-paths/1

void solve(Node* root, int k,int &cnt, vector<int> path)
{
     if(root == NULL)
            return ;  
        path.push_back(root->data);  
        //left
        solve(root->left, k, cnt, path);
        //right
        solve(root->right, k, cnt, path);
        
        //check for K Sum
        int size = path.size();
        int sum = 0;
        for(int i = size-1; i>=0; i--)  {
            sum += path[i];
            if(sum == k)
                cnt++;
        }
        
        path.pop_back();
}

class Solution{
  public:
    int sumK(Node *root,int k)
    {
        vector<int> path;
        int cnt=0;
        solve(root,k,cnt,path);
        return cnt;
    }
};