class Solution {
public:
    int total=0;
    int countSubstrings(string s) {
        for(int i=0;i<s.size();i++)
        {
            expand(s,i,i);
            expand(s,i,i+1);
        }
        return total;
               
    }
    void expand(string &s,int start,int end)
    {
        while(start>=0 && end < s.size() && s[start]==s[end])
        {
            total++;
            end++;
            start--;
        }
    }
};

