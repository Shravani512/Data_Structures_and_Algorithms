
class Solution
{
    public:
    map<int,map<int,int>> mp={0,{0,-1}};
    vector<int> verticalOrder(Node *root)
    {
        queue<pair<Node*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            Node* node=p.first;
            int x=p.second.first;
            int y=p.second.second;        
            if(mp[x][y]==-1)mp[x][y]=node->data;
            if(node->left!=NULL)q.push({node->left,{x-1,y+1}}); 
            if(node->right!=NULL) q.push({node->right,{x+1,y+1}});
        }
        vector<int> temp;
        for(auto p:mp)
        {
            temp.push_back(mp.second.second);
        }
        return temp;
    } 
};