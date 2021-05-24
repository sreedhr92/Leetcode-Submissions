class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        unordered_map<int,int> hash;
        for(int i:nums1)
            hash[i]++;
        for(int i:nums2)
        {
            if(hash[i])
            {
                output.push_back(i);
                hash[i]--;
            }
        }
        return output;
    }
};
