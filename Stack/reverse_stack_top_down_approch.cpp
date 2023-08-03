// https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

void insertAtBottom(int x, stack<int>& stack,int &size)
{
    if(stack.size()==size)
    {
        stack.push(x);
        size++;
        return;
    }
    int top=stack.top();
    stack.pop();
    insertAtBottom(x,stack,size);
    stack.push(top);
}

void reverseStack(stack<int> &stack) {
    // Write your code hereint
    int size=0;
    int k=stack.size();
    while(k--)
    {
        int x=stack.top();
        stack.pop();
        insertAtBottom(x,stack,size);
    }
}