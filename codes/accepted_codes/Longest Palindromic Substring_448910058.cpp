class Solution {
public:
    int begin=0;
    int len =1;
    string longestPalindrome(string s) {
        if(s.size()<2)
            return s;
        for(int i=0;i<s.size();i++)
        {
            expand(s,i,i);
            expand(s,i,i+1);
        }
        return s.substr(begin,len);
               
    }
    void expand(string &s,int start,int end)
    {
        while(start>=0 && end < s.size() && s[start]==s[end])
        {
            end++;
            start--;
        }
        start++;
        if(end-start>len)
        {
            begin = start;
            len = end-start;            
        }
    }
};
