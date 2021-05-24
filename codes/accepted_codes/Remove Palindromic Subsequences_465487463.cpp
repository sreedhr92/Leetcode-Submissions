class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0)
            return 0;
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=s[n-i-1])
                return 2;
        }
        return 1;
    }
};
