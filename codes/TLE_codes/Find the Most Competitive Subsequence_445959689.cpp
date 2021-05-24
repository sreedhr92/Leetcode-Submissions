class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        if(k==nums.size())
            return nums;
        vector<int> output;
        int temp = INT_MAX;
        int start;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j <= nums.size()-k;j++)
            {
                if(nums[j] < temp)
                {
                    temp = nums[j];
                    start = j;
                }
            }
            output.push_back(temp);
            temp = INT_MAX;
            if(temp!=nums[0])
                i = start;
            k--;
            if(k==0)
                break;
        }
        return output;
    }
};
