class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        if(k==nums.size())
            return nums;
        vector<int> ans;
        int rem = nums.size()-k;
        for(int i=0;i<nums.size();i++)
        {
            while(!ans.empty() && nums[i] < ans.back() && rem)
            {
                ans.pop_back();
                rem--;
            }
            ans.push_back(nums[i]);
        }
        vector<int> output = vector<int> (ans.begin(),ans.begin()+k);
        return output;
    }
};
