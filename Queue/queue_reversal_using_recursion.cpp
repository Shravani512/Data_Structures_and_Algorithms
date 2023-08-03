
// https://practice.geeksforgeeks.org/problems/queue-reversal/1
class Solution
{
    public:
    void solve(queue<int>&q)
    {
        if(q.empty()) return;
        int top=q.front();
        q.pop();
        solve(q);
        q.push(top);
    }
    queue<int> rev(queue<int> q)
    {
        solve(q);
        return q;
    }
};


