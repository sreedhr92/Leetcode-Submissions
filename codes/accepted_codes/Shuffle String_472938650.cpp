class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        string output=s;
        for(int i=0;i<indices.size();++i)
            output[indices[i]]=s[i];
        return output;
    }
};
