class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int miss=0;
        int a[26]={0};
        int b[26]={0};
        for(char ch:s1)
            a[ch-'a']++;
        for(char ch:s2)
            b[ch-'a']++;
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
                miss++;
        }
        if(miss<=2)
            return true;
        else
            return false;
    }
};
