
// https://practice.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=distance-from-the-source-bellman-ford-algorithm

// use to find shortest distence between the start and the end point
// TC O(VXE) which is greater than dijkstra's algorithm
//but it used to find the negative weighted graph which is not possible in dijkstra's algo as it goes in infinite loop

class Solution {
  public:
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int>dist(V,1e8);
        dist[S]=0;
        
        for(int i=0;i<V-1;i++)
        {
            for(auto c:edges)
            {
                int u=c[0];
                int v=c[1];
                int distance=c[2];
                
                if(dist[u]!=1e8 && dist[u]+distance<dist[v])
                {
                    dist[v]=distance+dist[u];
                }
            }
        }
        //one more time we will do iteration
        //to check if negative weighted edges are present or not if present then return -1
        for(auto c:edges)
        {
            int u=c[0];
            int v=c[1];
            int distance=c[2];
            
            if(dist[u]!=1e8 && dist[u]+distance<dist[v])
            {
                return {-1};
            }
        }
        return dist;
    }
};