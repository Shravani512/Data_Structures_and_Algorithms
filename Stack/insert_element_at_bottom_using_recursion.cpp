// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio  

#include <bits/stdc++.h> 

void solve(stack<int> & sk,int x)
{
    if(sk.empty())
    {
        sk.push(x);
        return;
    }
    int topp=sk.top();
    sk.pop();
    solve(sk,x);
    sk.push(topp);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}

