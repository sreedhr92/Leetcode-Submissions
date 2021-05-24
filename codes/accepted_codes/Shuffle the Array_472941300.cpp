class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output;
        int left=0;
        int right=n;
        while(right!=2*n)
        {
            output.push_back(nums[left++]);
            output.push_back(nums[right++]);
        }
        return output;
        
    }
};
