#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
    int top;

    public:
        int a[MAX];
        Stack() {top=-1;}       // not having this step caused TLE error
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};

bool Stack::push(int x)
{
    if(top>=(MAX-1))
    {
        cout<<"Stack Overflow";
        return false;
    }
    else{
        a[++top]=x;
        cout<<x<<" pushed to Stack \n";
        return true;
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"Empty Stack";
        return INT_MIN;
    }
    else{
        int x=a[top--];
        cout<<x<<" popped from Stack\n";
        return x;
    }
}

int Stack::peek()
{
    if(top<0)
    {
        cout<<"Empty Stack";
        return INT_MIN;
    }
    else{
        return a[top];
    }
}

bool Stack::isEmpty() 
{
    return (top<0);
}

int main()
{
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout<<s.peek();
    cout<<s.isEmpty();
}