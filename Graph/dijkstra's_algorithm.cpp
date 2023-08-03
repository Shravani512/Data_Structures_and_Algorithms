
// https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implementing-dijkstra-set-1-adjacency-matrix
//using  mean heap
// firstly all the distance from the node is initiated with  infinity value so that by camparing we can get the min distance
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int>dist(V,1e9);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dist[S]=0;
        pq.push({0,S});
        while(!pq.empty())
        {
            int node=pq.top().second;
            int distance=pq.top().first;
            pq.pop();
            
            for(auto c:adj[node])
            {
                int adjdis=c[1];
                int adjnode=c[0];
                
                if(distance+adjdis<dist[adjnode])
                {
                    dist[adjnode]=distance+adjdis;
                    pq.push({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
    }
};