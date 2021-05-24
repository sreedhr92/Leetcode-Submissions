class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> mystack;
    stack<int> minstack;
    MinStack() {
        
        
        
    }
    
    void push(int x) {
        if(minstack.empty() || x<=minstack.top()) minstack.push(x);
        mystack.push(x);
        
    }
    
    void pop() {
        if(minstack.top()==mystack.top())minstack.pop();
        mystack.pop();
        
    }
    
    int top() {
        return mystack.top();
        
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
