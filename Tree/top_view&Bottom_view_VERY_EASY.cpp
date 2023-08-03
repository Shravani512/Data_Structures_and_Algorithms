

//bottom view   
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        queue<pair<Node*,int>> q;
        q.push({root,0});
        map<int,Node*>mp;
        
        while(!q.empty())
        {
            Node* temp=q.front().first;
            int hd=q.front().second;
            q.pop();
            mp[hd]=temp;
            
            if(temp->left!=NULL)q.push({temp->left,hd-1});
            if(temp->right!=NULL)q.push({temp->right,hd+1});
        }
        vector<int>ans;
        for(auto c:mp)
        {
            ans.push_back(c.second->data);
        }
        return ans;
    }
};



//bottom view
class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        queue<pair<Node*,int>>q;
        q.push({root,0});
        map<int,Node*>mp;
        
        while(!q.empty())
        {
            Node* temp=q.front().first;
            int hd=q.front().second;
            q.pop();
            
            if(!mp[hd])
            {
                mp[hd]=temp;
            }
            if(temp->left!=NULL)
            {
                q.push({temp->left,hd-1});
            }
            if(temp->right!=NULL)
            {
                q.push({temp->right,hd+1});
            }
        }
        
        vector<int> ans;
        for(auto c: mp)
        {
            ans.push_back(c.second->data);
        }
        return ans;
    }
};