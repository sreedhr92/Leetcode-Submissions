class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        int i,diff;
        for(i=0;i<nums.size();++i)
        {
            diff  = target - nums[i];
            if(hash.find(diff)!=hash.end())
                return {hash[diff],i};
            hash[nums[i]]=i;
        }
        return {};
        
    }
};
