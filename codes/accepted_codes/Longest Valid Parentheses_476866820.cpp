class Solution {
public:
    int longestValidParentheses(string s) {
        int left,len,right;
        left=right=len=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                left++;
            else
                right++;
            if(left==right)
                len=max(len,2*right);
            else if(right>=left)
                left=right=0;
        }
        left=right=0;
        for(int i=s.size()-1;i>=0;--i)
        {
            if(s[i]=='(')
                left++;
            else
                right++;
            if(left==right)
                len=max(len,2*left);
            else if(left>=right)
                left=right=0;
        }
        return len;
    }
};
