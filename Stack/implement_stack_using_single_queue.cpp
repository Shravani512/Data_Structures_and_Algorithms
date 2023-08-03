#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> sk;
    sk.push(5);
    sk.push(4);
    sk.push(3);
    sk.push(2);
    sk.push(1);
    vector<int> StackVector;
    while(!sk.empty()){
        StackVector.push_back(sk.top());
        sk.pop();
    }

    queue<int> q;
    int k=5;
    for(int i=0;i<5;i++)
    {
        if(q.empty()){
            q.push(k);
            k--;
        }
        else{
            q.push(k);
            k--;
            for(int i=0;i<q.size()-1;i++)
            {
                int x=q.front();
                q.pop();
                q.push(x);
            }
        }
    }
    vector<int>QueueVector;
    while(!q.empty())
    {
        QueueVector.push_back(q.front());
        q.pop();
    }

    cout<<"Stack elements"<<endl;
    for(int i=0;i<StackVector.size();i++)cout<<StackVector[i]<<" ";
    cout<<endl;
    cout<<"Queue elements"<<endl;
    for(int i=0;i<QueueVector.size();i++)cout<<QueueVector[i]<<" ";
}