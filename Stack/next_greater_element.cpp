// https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

class Solution{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v(n,0);
        stack<pair<long long,long long>> sk;
        
        for(long long i=0;i<n;i++)
        {
            if(sk.empty()) sk.push({i,arr[i]});
            else if(arr[i]>(sk.top().second))
            {
                while(sk.top().second<arr[i])
                {
                    v[sk.top().first]=arr[i];
                    sk.pop();
                    if(sk.empty()) break;
                }
                sk.push({i,arr[i]});
            }
            else{
                sk.push({i,arr[i]});
            }
        }
        for(long long i=0;i<n;i++)
        {
            if(v[i]==0) v[i]=-1;
        }
        return v;
    }
};