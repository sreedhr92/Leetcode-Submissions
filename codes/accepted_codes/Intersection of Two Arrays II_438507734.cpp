class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        vector<bool> visited(nums2.size(),false);
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(!visited[j] && nums1[i]==nums2[j])
                {
                    output.push_back(nums1[i]);
                    visited[j] = true;
                    break;
                }
            }
        }
        return output;
    }
};
