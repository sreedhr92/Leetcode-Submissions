class Solution {
public:
    int evaluate(int left,int right,char op)
    {
        if(op=='+')
            return left+right;
        else if(op=='-')
            return left-right;
        else if(op=='*')
            return left*right;
        else
            return left/right;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> mystack;
        for(string s:tokens)
        {
            if(s.size()==1 and (s[0]=='+' || s[0]=='-' || s[0]=='*' || s[0]=='/'))
            {
                int right = mystack.top();
                mystack.pop();
                int left = mystack.top();
                mystack.pop();
                int result = evaluate(left,right,s[0]);
                mystack.push(result);
            }
            else
                mystack.push(stoi(s));
        }
        return mystack.top();
    }
};