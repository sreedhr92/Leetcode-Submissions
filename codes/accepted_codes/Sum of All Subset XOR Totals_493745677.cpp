class Solution {
public:
    vector<vector<int>> subsets;
    void find_sub(vector<int>& nums,int index,vector<int> &sub)
    {
        subsets.push_back(sub);
        for(int i=index;i<nums.size();++i)
        {
            sub.push_back(nums[i]);
            find_sub(nums,i+1,sub);
            sub.pop_back();
        }
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> sub;
        find_sub(nums,0,sub);
        int output=0;
        cout<<subsets.size()<<endl;
        for(auto i:subsets)
        {
            int sum=0;
            if(i.size()==0)
                sum=0;
            else
            {
                for(int num : i)
                    sum ^= num;
            }
            
            output+=sum;
        }
        return output;
    }
};
