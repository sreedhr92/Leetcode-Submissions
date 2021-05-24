class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one=0;
        int two=0;
        for(int i:nums)
        {
            if(i==0)
                zero++;
            else if(i==1)
                one++;
            else
                two++;
        }
        int i=0;
        while(zero && i<nums.size())
        {
            nums[i]=0;
            i++;
            zero--;
        }
        while(one && i<nums.size())
        {
            nums[i]=1;
            i++;
            one--;
        }
        while(two && i<nums.size())
        {
            nums[i]=2;
            i++;
            two--;
        }
        
    }
};
