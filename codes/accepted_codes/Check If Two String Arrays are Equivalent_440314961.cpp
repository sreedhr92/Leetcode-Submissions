class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s;
        for(auto i:word1)
            s+=i;
        string t;
        for(auto i:word2)
            t+=i;
        return s.compare(t)==0 ? true:false; 
        
        
    }
};
