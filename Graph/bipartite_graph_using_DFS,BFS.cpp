
// https://practice.geeksforgeeks.org/problems/bipartite-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bipartite-graph
//solution1 DFS
class Solution {
public:

    bool bfsOfGraph(int start,vector<int> adj[],vector<int> & vis)
    {
        vis[start]=1;
        queue<pair<int,int>> q;
        q.push({start,1});
        
        while(!q.empty())
        {
            int node=q.front().first;
            int col=q.front().second;
            q.pop();
            int newC;
            if(col==1) newC=0;
            else newC=1;
            
            for(auto c:adj[node])
            {
                if(vis[c]==-1)
                {
                    q.push({c,newC});
                    vis[c]=newC;
                }
                else if(vis[c]!=-1)
                {
                    if(vis[c]!=newC)return false;
                }
            }
        }
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    // Code her0e
	    vector<int> vis(V,-1);
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==-1)
	        {
	            if(bfsOfGraph(i,adj,vis)==false) return false;
	        }
	    }
	    return true;
	}

};

// solution2
class Solution {
public:

    int dfs(int start,int col,vector<int>&vis,vector<int> adj[])
    {
        vis[start]=col;
        for(auto c:adj[start])
        {
            if(vis[c]==-1)
            {
                if(dfs(c,!col,vis,adj)==false) return false;
            }
            else if(vis[c]==col)
            {
                return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int> vis(V,-1);
	   
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==-1)
	        {
	            if(dfs(i,0,vis,adj)==false)return false;
	        }
	    }
	    return true;
	}

};