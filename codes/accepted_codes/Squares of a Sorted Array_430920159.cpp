class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int len=n-1;
        vector<int> ans(n);
        while(left<=right)
        {
            if(abs(nums[left])>abs(nums[right]))
            {
                ans[len--] = nums[left]*nums[left];
                left++;
            }
            else
            {
                ans[len--] = nums[right]*nums[right];
                right--;
            }
        }
        return ans;
            
    }
};
