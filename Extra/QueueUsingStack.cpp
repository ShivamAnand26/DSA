#include <bits/stdc++.h>
using namespace std;

class MyQueue
{

public:
    stack<int> s1, s2;
    MyQueue()
    {
    }
    void push(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop()
    {
        if (s1.empty())
            return -1;
        int d = s1.top();
        s1.pop();
        return d;
    }
    int peek()
    {
        return s1.top();
    }
    bool empty()
    {
        return s1.empty();
    }
};

int main()
{
    MyQueue *obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    obj->push(3);
    obj->push(4);

    cout << "POP Element " << obj->pop() << endl;
    cout << "Peek Element " << obj->peek() << endl;
    cout << "Empty " << obj->empty() << endl;
}