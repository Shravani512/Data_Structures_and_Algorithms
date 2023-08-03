// https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> maxAns;
        
        queue<pair<int,int>> q;
        for(int i=0;i<k;i++)
        {
            if(q.empty())q.push({i,arr[i]});
            else{
                if(q.front().second<arr[i])
                {
                    q.pop();
                    q.push({i,arr[i]});
                }
            }
        }
        maxAns.push_back(q.front().second);
        
        for(int i=k;i<n;i++)
        {
            while(q.front().first<k-1)q.pop();
            if(q.empty())q.push({i,arr[i]});
            else if(q.front().second<arr[i]){
                q.pop();
                q.push({i,arr[i]});
            }
            
            maxAns.push_back(q.front().second);
        }
        return maxAns;
    }
};