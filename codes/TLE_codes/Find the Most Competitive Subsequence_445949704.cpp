class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> output;
        int temp = nums[0];
        int dist;
        int start;
        for(int i=0;i<nums.size();i++)
        {
            cout<<"temp = "<<temp<<endl;
            for(int j=i;j < nums.size()-k+1;j++)
            {
                if(nums[j] < temp)
                {
                    cout<<"temp = "<<temp<<endl;
                    temp = nums[j];
                    start = j;
                }
            }
            cout<<"outside temp = "<<temp<<endl;
            output.push_back(temp);
            temp = INT_MAX;
            if(temp!=nums[0])
                i = start;
            k--;
            if(k==0)
                break;
        }
        return output;
    }
};
