class Solution {
public:
    char findTheDifference(string s, string t) {
        int miss=s[0]^t[0];int i;
        for(i=1;i<s.size();i++)
        {
            miss^=s[i];
            miss^=t[i];
        }
        miss^=t[i];
        return char(miss);
    }
};
