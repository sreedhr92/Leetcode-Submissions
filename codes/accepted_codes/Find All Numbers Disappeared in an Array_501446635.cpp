class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int m = abs(nums[i])-1;
            nums[m] = nums[m] > 0 ? -nums[m]:nums[m];
        }
        vector<int> output;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                output.push_back(i+1);
        }
        return output;
    }
};