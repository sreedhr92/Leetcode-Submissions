class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26] = {0};
        int b[26] = {0};
        for(auto ch:s)
            a[ch-'a']++;
        for(auto ch:t)
            b[ch-'a']++;
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
        
    }
};
