class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=1;
        int v=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int t=1;
            while(i<nums.size() && nums[i]==nums[i-1])
            {
                t++;
                i++;
            }
            if(t>m)
            {
                m=t;
                v=nums[i-1];
            }
        }
        return v ;
    }
};
