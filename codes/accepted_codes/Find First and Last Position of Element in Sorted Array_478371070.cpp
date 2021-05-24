class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {      
        int l=0,r=nums.size()-1;
        int mid=0;
        int flag=0;
        while(l<=r)
        {
            mid = l+(r-l)/2;
            if(nums[mid]==target)
            {
                flag=1;
                break;
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        if(flag)
        {
            int start=mid;
            while(start-1>=0 && nums[start-1]==target)
                start--;
            int end=mid;
            while(end+1<nums.size() && nums[end+1]==target)
                end++;
            return {start,end};            
        }
        return {-1,-1};
    }
};
