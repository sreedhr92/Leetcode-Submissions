class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 and s[i]<=90)
                s[i]= char(s[i]+32);
        }
        return s;
    }
};