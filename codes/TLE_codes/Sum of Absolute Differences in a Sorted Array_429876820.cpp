class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> result(nums.size());
        int i,j;
        int sum;
        for(i=0;i<nums.size();++i)
        {
            sum = 0;
            for(j=0;j<nums.size();++j)
            {
                sum += abs(nums[i]-nums[j]);
            }
            result[i]=sum;
        }
        return result;
        
    }
};
