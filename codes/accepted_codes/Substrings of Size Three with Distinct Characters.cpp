class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<=2)
            return 0;
        int output=0;
        for(int i=0;i<=s.size()-3;i++)
        {
            string temp = s.substr(i,3);
            int a[26]={0};
            int flag=0;
            for(char ch:temp)
            {
                if(a[ch-'a'])
                {
                    flag=1;
                    break;
                }
                a[ch-'a']++;
            }
            if(!flag)
            {
                output++;
            }
        }
        return output;
    }
};