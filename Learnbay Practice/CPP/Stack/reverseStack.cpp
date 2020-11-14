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

void insertAtBottom(Stack *s, int data );

void reverseStack(Stack *s)
{
    int data;
    if(s->isEmpty())
        return;
    data=s->pop();
    reverseStack(s);
    insertAtBottom(s,data);

}

void insertAtBottom(Stack *s, int data )
{
    int temp;
    if(s->isEmpty())
    {
        s->push(data);
        return;
    }

    temp=s->pop();
    insertAtBottom(s,data);
    s->push(temp);
}

int main()
{
    class Stack s;
    s.push(3);
    s.push(4);
    s.push(2);
    s.push(1);
    s.reverseStacK();
    return 0;
}

//---------------------------------------------------------------------------------------------------






