class Solution {
public:
    char findTheDifference(string s, string t) {
        int miss=0,i;
        for(i=0;i<s.size();i++)
        {
            miss-=s[i];
            miss+=t[i];
        }
        miss+=t[i];
        return char(miss);
    }
};
