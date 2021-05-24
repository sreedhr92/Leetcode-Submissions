class Solution {
public:
    vector<vector<int>> subset;
    void build(vector<int> &nums,int pos,vector<int> &sub)
    {
        subset.push_back(sub);
        for(int i=pos;i<nums.size();i++)
        {
            sub.push_back(nums[i]);
            build(nums,i+1,sub);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subs;
        build(nums,0,subs);
        return subset;        
    }
};
