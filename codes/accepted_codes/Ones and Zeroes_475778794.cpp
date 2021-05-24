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
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        int output=0;
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
        int a[2]={0};
        for(auto i:dp)
        {
            if(a[0]+i.first<=m && a[1]+i.second<=n)
            {
                output++;
                a[0]+=i.first;
                a[1]+=i.second;
            }
        }
        sort(dp.begin(),dp.end(),compare_1);
        int o=0;
        a[0]=0;
        a[1]=0;
        for(auto i:dp)
        {
            if(a[0]+i.first<=m && a[1]+i.second<=n)
            {
                o++;
                a[0]+=i.first;
                a[1]+=i.second;
            }
        }
        int prev = max(o,output);
        sort(dp.begin(),dp.end(),compare_01);
        o=0;
        a[0]=0;
        a[1]=0;
        for(auto i:dp)
        {
            if(a[0]+i.first<=m && a[1]+i.second<=n)
            {
                o++;
                a[0]+=i.first;
                a[1]+=i.second;
            }
        }
        return max(prev,o);
    }
};
