// https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

void solve(queue<int> &q)
{
    int size=q.size();
    if(q.empty())
    {
        return;
    }
    int top=q.front();
    q.pop();
    solve(q);
    q.push(top);
}
void reverseK(queue<int> &q,int k)
{
    stack<int> sk;
    int rev=q.size()-k;
    for(int i=0;i<rev;i++)
    {
        int x=q.front();
        sk.push(x);
        q.pop();
    }
    while(!sk.empty())
    {
        q.push(sk.top());
        sk.pop();
    }
}
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here
    solve(q);
    reverseK(q,k);  
    // while(q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }  
    return q;
}