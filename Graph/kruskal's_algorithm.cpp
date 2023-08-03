
// https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-spanning-tree
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       vector<int> vis(V,0);
       
       
       //pair of edge weight and the node(v)
       pq.push({0,0});
       int sum=0;
       while(!pq.empty())
       {
           auto c=pq.top();
           pq.pop();
           int wt=c.first;
           int node=c.second;
           
           if(vis[node]==1)continue;
           sum+=wt;
           vis[node]=1;
           for(auto k:adj[node])
           {
               int nxtnode=k[0];
               int nxtwt=k[1];
               if(!vis[nxtnode])
               {
                   pq.push({nxtwt,nxtnode});
               }
           }
       }
       return sum;
    }
};
