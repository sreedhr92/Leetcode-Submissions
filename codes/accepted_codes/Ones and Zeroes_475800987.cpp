class Solution {
public:
    static bool compare_0(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first==b.first)return a.second<b.second;
        return a.first<b.first;
    }
    static bool compare_1(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second==b.second)return a.first<b.first;
        return a.second<b.second;
    }
    static bool compare_01(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first+a.second==b.second+b.first)return a.first<b.first;
        return a.first+a.second<b.second+b.first;
    }
    int helper(vector<pair<int,int>> &dp,int &m,int &n)
    {
        int a[2]={0};
        int output=0;
        for(auto i:dp)
        {
            if(a[0]+i.first<=m && a[1]+i.second<=n)
            {
                output++;
                a[0]+=i.first;
                a[1]+=i.second;
            }
        }
        return output;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>> dp;
        for(string s:strs)
        {
            int i=0,j=0;
            for(char ch:s)
            {
                if(ch-'0'==0)
                    i++;
                else
                    j++;
            }
            dp.push_back({i,j});
        }
        sort(dp.begin(),dp.end(),compare_0);
        int n1 = helper(dp,m,n);
        sort(dp.begin(),dp.end(),compare_1);
        int n2 = helper(dp,m,n);
        sort(dp.begin(),dp.end(),compare_01);
        int n3 = helper(dp,m,n);
        return n1 > n2 ? n1 > n3 ? n1 : n3 : n2 > n3 ? n2 : n3;
    }
};
