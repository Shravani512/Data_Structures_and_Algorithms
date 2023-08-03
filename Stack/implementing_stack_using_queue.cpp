// use 2 queues
// add element in q2
// pop every element from q1 and add to q2
// coty q2 to q1

# include<bits/stdc++.h>
using namespace std;

void implement(int x,queue<int> & q1,queue<int> &q2)
{
    q2.push(x);
    if(!q1.empty())
    {
        while(!q1.empty())
        {
            int x=q1.front();
            q1.pop();
            q2.push(x);
        }
        swap(q1,q2);
    }
    else{
        q2.push(x);
        swap(q1,q2);
    }
}
int main()
{
    stack<int> stack;
    queue<int> q1;
    queue<int> q2;
    stack.push(1);
    implement(1,q1,q2);
    stack.push(2);
    implement(2,q1,q2);
    stack.push(3);
    implement(3,q1,q2);
    stack.push(4);
    implement(4,q1,q2);
    stack.push(5);
    implement(5,q1,q2);

    vector<int> p1;
    vector<int> p2;
    while(!stack.empty())
    {
        int x=stack.top();
        p1.push_back(x);
        stack.pop();
    }
    // if(q1.empty()) cout<<"true"<<endl;
    while(!q1.empty())
    {
        int x=q1.front();
        p2.push_back(x);
        q1.pop();
    }

    cout<<"stack"<<endl;
    for(int i=0;i<p1.size();i++)cout<<p1[i]<<" ";
    cout<<"\nqueue"<<endl;
    for(int i=0;i<p2.size();i++)cout<<p2[i]<<" ";
}