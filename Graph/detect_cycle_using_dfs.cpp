
// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph
// same logic as that of DFS

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool detectdfs(int start,int parent,int vis[],vector<int> adj[])
    {
        vis[start]=1;
        
        for(auto c: adj[start])
        {
            if(!vis[c])
            {
                if(detectdfs(c,start,vis,adj)) return true;
            }
            else if(c!=parent)
            {
                return true;
            }
        }
        return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        
        int vis[V]={0};
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(detectdfs(i,-1,vis,adj)) return true;
            }
        }
        return false;
    }
};