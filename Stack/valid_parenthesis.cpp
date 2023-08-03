// https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

bool isValidParenthesis(string s)
{
    // Write your code here.
    int n=s.size();
    stack<char>sk;
    for (int i = 0; i < n; i++) {
      if (sk.empty() == 1)
        sk.push(s[i]);
      else if ((s[i] == ')' && sk.top() == '(') ||
               (s[i] == '}' && sk.top() == '{') ||
               (s[i] == ']' && sk.top() == '['))
        sk.pop();
      else
        sk.push(s[i]);
    }
    if(sk.empty()==1) return true;
    else return false;
}