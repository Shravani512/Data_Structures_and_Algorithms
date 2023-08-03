// https://www.codingninjas.com/studio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int n=0;
   if(N%2==0) n=(N+1)/2+1;
   else n=(N+1)/2;

   stack<int> sk;
   for(int i=1;i<n;i++)
   {
      int k=inputStack.top();
      inputStack.pop();
      sk.push(k);
   }
   inputStack.pop();
   
   while(!sk.empty())
   {
      int k=sk.top();
      sk.pop();
      inputStack.push(k);
   }
   
}