// https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

void insertAtBottom(stack<int> &sk,int x)
{
    if(sk.empty()){
        sk.push(x);
        return;
    }
    int topp=sk.top();
    sk.pop();
    insertAtBottom(sk,x);
    sk.push(topp);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty())return;
    int topp=stack.top();
    stack.pop();

    reverseStack(stack);
    insertAtBottom(stack,topp);
}