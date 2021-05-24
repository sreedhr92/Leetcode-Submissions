class Solution {
public:
    string sort_string(string s)
    {
        sort(s.begin(),s.end());
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        vector<vector<string>> output;
        for(auto i:strs)
            hash[sort_string(i)].push_back(i);
        for(auto i:hash)
            output.push_back(i.second);
        return output;
    }
};
