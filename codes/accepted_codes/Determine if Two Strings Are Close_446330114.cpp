class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        int a[26] = {0};
        int b[26] = {0};
        unordered_map<char,int>c1,c2;
        for(char ch:word1)
                c1[a[ch-'a']++]++;
        for(char ch:word2)
                c2[b[ch-'a']++]++;
        for(int i=0;i<26;i++)
        {
            if((!a[i] && b[i]) || (a[i] && !b[i]))
                return false;
        }
        for(auto i:c1)
        {
            if(c1[i.first]!=c2[i.first])
                return false;
        }
        return true;
        
    }
};
