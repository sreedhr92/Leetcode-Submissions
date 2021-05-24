class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        //int sum,i;
        //const int n = nums.size();
        vector<int> result;
        vector<int> prefix;
        deque<int> suffix;
        int pref=0;
        for(auto itr=nums.begin();itr!=nums.end();itr++)
        {
            pref+=*itr;
            prefix.push_back(pref);
        }
        int suf = 0;
        for(auto itr=nums.rbegin();itr!=nums.rend();itr++)
        {
            suf+=*itr;
            suffix.push_front(suf);
        }
        //int total = prefix.back();
        //cout<<n<<endl;
        for(int i=0;i<nums.size();++i)
        {
            int sum = 0;
            if(i>0)
                sum += (nums[i]*i) - prefix[i-1];
            if(i<nums.size())
                sum += suffix[i] - (nums[i]*(nums.size()-i));
            result.push_back(sum);
        }
        return result;   
    }
};
