class FreqStack {
public:
    unordered_map<int,stack<int>> s;
    unordered_map<int,int> m;
    int ma=0;
    FreqStack() {
        
    }
    void push(int x) {
        m[x]++;
        ma = max(ma,m[x]);
        s[m[x]].push(x);
    }
    
    int pop() {
        if(ma<0)
            return -1;
        int top = s[ma].top();
        s[ma].pop();
        m[top]--;
        if(s[ma].empty())
        {
            s.erase(ma);
            ma--;
        }
        return top;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
