class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        int val,flag;
        for(auto i:nums1)
        {
            val = -1;
            flag = 0;
            for(auto j:nums2)
            {
                if(i==j)flag=1;
                if(j>i&&flag)
                {
                    val = j;
                    break;
                }
            }
            output.push_back(val);
        }
        return output;
    }
};
