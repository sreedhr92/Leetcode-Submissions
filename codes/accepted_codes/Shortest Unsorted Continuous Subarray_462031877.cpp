class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=nums.size();
        int end=0;
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<nums.size();i++)
        {
            if(temp[i]!=nums[i])
            {
                end = max(end,i);
                start = min(start,i);
            }
        }
        return end-start < 0 ? 0 : end-start+1;
    }
};
