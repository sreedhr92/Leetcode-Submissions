class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> output(k,0);
        unordered_map<long long,set<int>> hash;
        for(int i=0;i<logs.size();i++)
            hash[logs[i][0]].insert(logs[i][1]);
        for(auto i:hash)
                output[(i.second.size())-1]++;
        return output;
        
    }
};
