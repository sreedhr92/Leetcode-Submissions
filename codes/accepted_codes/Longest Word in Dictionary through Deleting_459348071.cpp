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
        string ret = "";
        int m=0;
        for(int i=0;i<d.size();i++)
        {
            if(d[i].size()<m)
                continue;
            if(is_possible(d[i],s))
            {
                if(m==d[i].size())
                {
                    if(ret>d[i])
                        ret = d[i];
                }
                else{
                    ret = d[i];
                    m = d[i].size();
                    }

            }
        }       
        return ret;
            
    }
};
