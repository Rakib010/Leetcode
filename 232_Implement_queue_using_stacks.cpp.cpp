#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> st;

    MyQueue() {
    }
    
    void push(int x) {
        st.push(x);
    }
    
    // Removes the element from the front of queue and returns it
    int pop() {  // 0(n)
        stack<int> st2;
        int val;

        // Move elements until front element is found
        while (!st.empty()) {
            val = st.top();
            st.pop();
            if (st.empty()) break; // front element
            st2.push(val);
        }

        // Restore elements back to original stack
        while (!st2.empty()) {
            st.push(st2.top());
            st2.pop();
        }

        return val;
    }
    
    // Get the front element
    int peek() {  // 0(n)
        stack<int> st2;
        int val;

        // Move all elements to helper stack
        while (!st.empty()) {
            val = st.top();
            st.pop();
            st2.push(val);
        }

        // Restore back
        while (!st2.empty()) {
            st.push(st2.top());
            st2.pop();
        }

        return val; // front element
    }
    
   
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
