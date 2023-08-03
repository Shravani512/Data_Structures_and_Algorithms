// https://practice.geeksforgeeks.org/problems/queue-using-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Queue {
    stack<int> input, output;
public:
    void reverse(stack<int> &s,int x)
    {
        if(s.empty()) {
            s.push(x);
            return;
        }
        int top=s.top();
        s.pop();
        reverse(s,x);
        s.push(top);
    }
    
    void enqueue(int x) {
        if(input.empty())input.push(x);
        else reverse(input,x);
    }

    int dequeue() {
        if(input.empty()) return -1;
        else
        {
            int x=input.top();
            input.pop();
            return x;
        }
    }
};