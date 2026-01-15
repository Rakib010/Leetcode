// Implement Stack using Queues

class MyStack
{
public:
    queue<int> q;
    MyStack() {}

    void push(int x)  // 0(1)
    {
        q.push(x);
    }

    int pop()  //0(n)
    {
        queue<int> q2;
        int val;
        while (!q.empty())
        {
            val = q.front();
            q.pop();
            if (q.empty() == true)
                break;
            q2.push(val);
        }
        q = q2;
        return val;
    }

    int top()  // 0(1)
    {
        return q.back();
    }

    bool empty()  // 0(1)
    {
        return q.empty();
    }
};
