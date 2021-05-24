class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())return false;
        set<string> hash;
        for(int i=0;i<=s.size()-k;i++)hash.insert(s.substr(i,k));
        return hash.size()==pow(2,k) ? true:false;
    }
};
