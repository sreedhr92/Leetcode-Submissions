class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        int a[26] = {0};
        int b[26] = {0};
        for(char ch:word1)
        {
            if(!a[ch-'a'])
                a[ch-'a']++;
        }
        for(char ch:word2)
        {
            if(!b[ch-'a'])
                b[ch-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        unordered_map<char,int> w1,w2,c1,c2;
        for(char ch:word1)
            c1[w1[ch]++]++;
        for(char ch:word2)
            c2[w2[ch]++]++;
        for(auto i:c1)
        {
            if(c1[i.first]!=c2[i.first])
                return false;
        }
        return true;
        
    }
};
