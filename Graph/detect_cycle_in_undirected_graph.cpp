

// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool detectcycle(int start,vector<int> adj[],int vis[])
    {
        vis[start]=1;
        queue<pair<int,int>> q;
        q.push({start,-1});
        
        while(!q.empty())
        {
            int child=q.front().first;
            int parent=q.front().second;
            q.pop();
            
            for(auto c:adj[child])
            {
                if(!vis[c])
                {
                    q.push({c,child});
                    vis[c]=1;
                }
                else if(vis[c]==1 && parent!=c) // that means if any node is visited the means the node has already came from that node only so it is visited that means the c is parent of node but if c is not parent of node that means already someone has visited the node that means thares a cycle prent in the graph
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        vector<pair<int,int>> v;
        int visited[V]={0};
        int start=0;
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(detectcycle(i,adj,visited)) return true; // it means in any component of graph if cycle is detectd then return true else after traversing all the components of graph if no any cycle  is detected then no cycle is detected thus then after the end of the loop return false that means no any loop is detected
            }
        }
        return false;
    }
};