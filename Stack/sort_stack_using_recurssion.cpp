// https://www.codingninjas.com/studio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

#include <bits/stdc++.h> 

void insert(stack<int> &stack,int num)
{
	if(stack.empty()|| (!stack.empty() && stack.top()<=num))
	{
		stack.push(num);
		return;
	}

	int topp=stack.top();
	stack.pop();
	
	insert(stack,num);
	stack.push(topp);
}


void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty())return;

	int topp=stack.top();
	stack.pop();
	sortStack(stack);

	insert(stack,topp);
}