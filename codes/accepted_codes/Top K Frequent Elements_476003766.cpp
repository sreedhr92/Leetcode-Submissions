class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int i:nums)
            hash[i]++;
        vector<pair<int,int>> freq;
        for(auto it:hash)
            freq.push_back({it.second,it.first});
        sort(freq.begin(),freq.end());
        vector<int> output;
        for(int i=freq.size()-1;i>=0 && k;i--,k--)
            output.push_back(freq[i].second);
        return output;
        
    }
};
