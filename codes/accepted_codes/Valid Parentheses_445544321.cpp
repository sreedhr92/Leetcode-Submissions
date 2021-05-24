class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for(char ch:s)
        {
            if(ch=='{' || ch == '[' ||ch=='(')
               mystack.push(ch);
            if(ch=='}'|| ch==']'  ||  ch==')')
            {
                if(mystack.empty())
                    return false;
                char sym = mystack.top();
                if(ch=='}' && sym =='{')
                    mystack.pop();
                else if(ch==']' && sym == '[')
                    mystack.pop();
                else if(ch==')' && sym == '(')
                    mystack.pop();
                else 
                    return false;
            }
        }
        if(mystack.empty())
            return true; 
        return false;
    }
};
