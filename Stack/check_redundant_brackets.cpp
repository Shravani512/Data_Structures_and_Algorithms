// https://www.codingninjas.com/studio/problems/redundant-brackets_975473?leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> stack;
    int i=0;
    
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        int flag=0;
        if(s[i]==')')
        {
            while(stack.top()!='(')
            {
                if(stack.top()=='+' || stack.top()=='-'|| stack.top()=='*'|| stack.top()=='/')
                {
                    flag=1;
                    stack.pop();
                }
                else stack.pop();
            }
            stack.pop();
            if(flag==0) return true;
            
        }
        else {
            stack.push(s[i]);
        }
    }
    return false;
}
