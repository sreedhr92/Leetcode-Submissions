class Solution {
public:
    bool is_possible(string a,string &s)
    {
        int j=0;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]==a[j])
                j++;
            if(j==a.size())
                return true;
        }
        return false;
    }
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(),d.end());
        int max_index =-1;
        int m=0;
        for(int i=0;i<d.size();i++)
        {
            if(d[i].size()<=m)
                continue;
            if(is_possible(d[i],s))
            {
                m = d[i].size();
                max_index=i;
            }
        }       
        if(max_index==-1)
            return "";
        else
            return d[max_index];
    }
};
