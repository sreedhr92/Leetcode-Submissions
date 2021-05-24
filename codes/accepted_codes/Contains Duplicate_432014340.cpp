class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto i:nums)
        {
            hash[i]++;
            if(hash[i] > 1)
                return true;
        }
        return false;
        
    }
};
