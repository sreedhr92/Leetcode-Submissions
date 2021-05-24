class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int two=nums.size()-1;
        for(int i=0;i<nums.size() && i<=two;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[zero]);
                zero++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[two]);
                two--;
                i--;
            }
        }
    }
};
