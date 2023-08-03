
// https://practice.geeksforgeeks.org/problems/topological-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=topological-sort											
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	void dfs(int start,int vis[],vector<int>adj[],stack<int>&s)
	{
	    vis[start]=1;
	    for(auto c:adj[start])
	    {
	        if(!vis[c])
	        {
	            dfs(c,vis,adj,s);
	        }
	    }
	    s.push(start);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V]={0};
	    stack<int> sk;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(i,vis,adj,sk);
	        }
	    }
	    
	    vector<int> ans;
	    while(!sk.empty())
	    {
	        ans.push_back(sk.top());
	        sk.pop();
	    }
	    return ans;
	}
};