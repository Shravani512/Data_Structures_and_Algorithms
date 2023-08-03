// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

class Solution {
	public:
		string FirstNonRepeating(string A){
		    string ans="";
		    int n=A.size();
		    queue<char> q;
		    vector<int> f(26,0);
		    for(int i=0;i<n;i++)
		    {
		        q.push(A[i]);
		        f[A[i]-'a']++;
		        while(!q.empty() && f[q.front()-'a']>1) q.pop();
		        if(!q.empty()) ans+=q.front();
		        else ans+='#';
		    }
		    return ans;
		}
};
