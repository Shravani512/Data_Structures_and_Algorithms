
// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=dfs_of_graph

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int start,int vis[],vector<int> adj[],vector<int> & ls)
    {
        vis[start]=1;
        ls.push_back(start);
        for(auto c: adj[start])
        {
            if(!vis[c])
            {
                dfs(c,vis,adj,ls);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ls;
        int start=0;
        int vis[V]={0};
        
        dfs(start,vis,adj,ls);
        return ls;
    }
};