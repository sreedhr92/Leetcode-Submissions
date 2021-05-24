class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=-1;
        int len=0;
        for(const int &i:nums)
        {
            if(i)
                len++;
            else
                len=0;
            maxi = max(maxi,len);
        }
        return maxi;
    }
};
