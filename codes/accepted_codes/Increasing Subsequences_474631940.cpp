class Solution {
public:
    set<vector<int>> s;
    void dfs(int start,vector<int> temp,vector<int>&nums,int val)
    {
        if(start==nums.size())
            return;
        if(temp.size()>=2)
            s.insert(temp);
        for(int i=start+1;i<nums.size();++i)
        {
            if(nums[i]>=val)
            {
                temp.push_back(nums[i]);
                dfs(i,temp,nums,nums[i]);
                temp.pop_back();
            }
        }
            
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> output;
        for(int i=0;i<nums.size();i++)
        {
            vector<int> temp;
            temp.push_back(nums[i]);
            dfs(i,temp,nums,nums[i]);
        }
        for(auto i:s)
            output.push_back(i);
        return output;
    }
};
