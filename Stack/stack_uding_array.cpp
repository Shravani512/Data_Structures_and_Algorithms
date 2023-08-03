#include<iostream>
using namespace std;

class MyStack{
public:
    int* arr;
    int top;
    int capacity;
    MyStack(int capacity)
    {
        this->capacity=capacity;
        top=-1;
        arr=new int[capacity];
    }
    void push(int data)
    {
        if(top==capacity)cout<<"stack full"<<endl;
        else{
            top++;
            arr[top]=data;
        }
    }
    void pop()
    {
        if(top==-1)cout<<"stack is empty"<<endl;
        else{
            int x=arr[top];
            top--;
            cout<<"poped element="<<x;
        }
    }
    void topele()
    {
        if(top==-1)cout<<"stack is empty"<<endl;
        else{
            int x=arr[top];
            cout<<"top element is="<<x;
        }
    }
    void isEmpty()
    {
        if(top==-1)cout<<"stack is empty"<<endl;
        else cout<<"stack is not empty"<<endl;
    }
};

int main()
{
    MyStack mk(10);
    mk.push(4);
    mk.push(5);
    mk.push(3);
    mk.push(2);
    mk.push(1);

    mk.pop();
    cout<<endl;
    mk.topele();
    cout<<endl;
    mk.isEmpty();
    cout<<endl;
}