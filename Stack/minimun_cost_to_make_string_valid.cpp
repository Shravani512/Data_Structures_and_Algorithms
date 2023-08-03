// https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 
int findMinimumCost(string str)
{  
  stack<int> stack;
  int n=str.size();

  for (int i = 0; i < n; i++) {
    if (stack.empty())
      stack.push(str[i]);
    else if (str[i] == '}' && stack.top() == '{')
      stack.pop();
    else stack.push(str[i]);
  }

  int cnt1=0,cnt2=0;
  if(stack.size()==1) return -1;
  while(!stack.empty())
  {
    if(stack.top()=='{') cnt1++;
    else cnt2++;
    stack.pop();
  }

  if(cnt1-cnt2==1) return -1;
  int ans=0;
  if(cnt1%2==0) ans+=cnt1/2;
  else ans+=(cnt1/2)+(cnt1%2);

  if(cnt2%2==0) ans+=cnt2/2;
  else ans+=(cnt2/2)+(cnt2%2);

  return ans;
}