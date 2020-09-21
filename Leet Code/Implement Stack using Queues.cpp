/* Leet Code */
/* Title - Implement Stack using Queues */
/* Created By - Akash Modak */
/* Date - 22/09/2020 */

// Implement the following operations of a stack using queues.

// push(x) -- Push element x onto stack.
// pop() -- Removes the element on top of the stack.
// top() -- Get the top element.
// empty() -- Return whether the stack is empty.
// Example:

// MyStack stack = new MyStack();

// stack.push(1);
// stack.push(2);  
// stack.top();   // returns 2
// stack.pop();   // returns 2
// stack.empty(); // returns false
// Notes:

// You must use only standard operations of a queue -- which means only push to back, peek/pop from front, size, and is empty operations are valid.
// Depending on your language, queue may not be supported natively. You may simulate a queue by using a list or deque (double-ended queue), as long as you use only standard operations of a queue.
// You may assume that all operations are valid (for example, no pop or top operations will be called on an empty stack).

class MyStack {
public:
    queue<int> q1,q2;
    
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
        // cout<<x<<endl;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int n = q1.size();
        for(int i=1;i<n;i++){
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        int t = q1.front();
        q1.pop();
        swap(q1,q2);
        return t;
    }
    
    /** Get the top element. */
    int top() {
        int n = q1.size();
        for(int i=1;i<n;i++){
            int temp = q1.front();
            q1.pop();
            // cout<<temp<<endl;
            q2.push(temp);
        }
        int t = q1.front();
        q1.pop();
        q2.push(t);
        swap(q1,q2);
        return t;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */