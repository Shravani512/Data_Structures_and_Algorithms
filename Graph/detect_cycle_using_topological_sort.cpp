// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-a-directed-graph

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        
        int cnt=0;
        int ind[V]={0};
        for(int i=0;i<V;i++)
        {
            for(auto c:adj[i])
            {
                ind[c]++;
            }
        }
        
        queue<int>q;
        for(int i=0;i<V;i++)
        {
            if(ind[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            cnt++;
            for(auto c:adj[node])
            {
                ind[c]--;
                if(ind[c]==0)q.push(c);
            }
        }

        if(cnt==V) return false;
        return true;
        
    }
};