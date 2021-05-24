class Solution {
public:
    vector<vector<int>> output;
    void build(vector<int> &nums,vector<int> &perm,vector<bool> &visited)
    {
        if(perm.size()==nums.size())
        {
            output.push_back(perm);
            for(bool i:visited)
                i=false;
            return;
        }
        for(int i=0;i<nums.size();++i)
        {
            if(!visited[i])
            {
                visited[i]=true;
                perm.push_back(nums[i]);
                build(nums,perm,visited);
                perm.pop_back();
                visited[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> visited(nums.size(),false);
        vector<int> perm;
        build(nums,perm,visited);
        return output;
    }
};
