// https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

// self approach
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<vector<int>> ans;
    	vector<int> ret;
    	if(root==NULL) return ret;
    	queue<Node*> dq;
    	dq.push(root);
        
    	while(!dq.empty())
    	{
    	   int n=dq.size();
    	   vector<int>v;
    	   for(int i=0;i<n;i++)
    	   {
    	       Node* temp=dq.front();
    	       dq.pop();
    	       if(temp->left!=NULL) dq.push(temp->left);
    	       if(temp->right!=NULL)dq.push(temp->right);
    	       v.push_back(temp->data);
    	   }
    	   ans.push_back(v);
    	}
    	
    	for(int i=0;i<ans.size();i++)
    	{
    	    if(i%2!=0) 
    	    {
    	        for(int j=ans[i].size()-1;j>=0;j--)
        	    {
        	        ret.push_back(ans[i][j]);
        	    }
    	    }
    	    else{
    	        for(int j=0;j<ans[i].size();j++)
        	    {
        	        ret.push_back(ans[i][j]);
        	    }
    	    }
    	}
    	return ret;
    }
};



// solution2 just use level
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<vector<int>> ans;
    	vector<int> ret;
    	if(root==NULL) return ret;
    	queue<Node*> dq;
    	dq.push(root);
        int level=0;
    	while(!dq.empty())
    	{
    	   int n=dq.size();
    	   vector<int>v;
    	   for(int i=0;i<n;i++)
    	   {
    	       Node* temp=dq.front();
    	       dq.pop();
    	       if(temp->left!=NULL) dq.push(temp->left);
    	       if(temp->right!=NULL)dq.push(temp->right);
    	       v.push_back(temp->data);
    	   }
    	   if(level%2!=0) reverse(v.begin(),v.end());
    	   level++;
    	   ans.push_back(v);
    	}
    	
    	for(int i=0;i<ans.size();i++)
    	{
    	    for(int j=0;j<ans[i].size();j++)
    	    {
    	        ret.push_back(ans[i][j]);
    	    }
    	}
    	return ret;
    }
};