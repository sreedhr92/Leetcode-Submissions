class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> hash;
        for(int i=0;i<s.size();i++)
            hash[s[i]]=t[i];
        set<char> myset;
        for(auto it:hash)
        {
            if(myset.find(it.second)!=myset.end())
                return false;
            myset.insert(it.second);
        }
        string n="";
        for(char ch:s)
            n+=hash[ch];
        return n.compare(t)==0?true:false;
        
    }
};
