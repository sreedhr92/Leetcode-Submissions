class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> result(nums.size());
        int sum;
        int k =0;
        for(const int &i:nums)
        {
            sum = 0;
            for(const int &j:nums)
            {
                sum += abs(i-j);
            }
            result[k]=sum;
            k++;
        }
        return result;
        
    }
};
