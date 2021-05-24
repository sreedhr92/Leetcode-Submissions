class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())return false;
        set<int> hash;
        for(int i=0;i<=s.size()-k;i++)hash.insert(stoi(s.substr(i,k),0,2));
        return hash.size()==1<<k? true:false;
    }
};
