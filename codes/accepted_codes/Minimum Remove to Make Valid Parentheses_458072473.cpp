class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> mystack;
        int n = s.size();
        vector<int> dp(n,0);
        for(int i=0;i<n;++i)
        {
            if(s[i]=='(')
                mystack.push(i);
            if(s[i]==')')
            {
                if(!mystack.empty())
                {
                    mystack.pop();
                }
                else
                    dp[i]=1;
            }
        }
        while(!mystack.empty())
        {
            int i = mystack.top();
            mystack.pop();
            dp[i]=1;
        }
        string output="";
        for(int i=0;i<n;i++)
        {
            if(!dp[i])
                output+=s[i];
        }
        return output;
        
    }
};
