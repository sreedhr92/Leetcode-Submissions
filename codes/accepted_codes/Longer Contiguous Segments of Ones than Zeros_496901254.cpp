class Solution {
public:
    bool checkZeroOnes(string s) {
        int one=0,zero=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                int len = 0;
                while(s[i]=='1')
                {
                    i++;
                    len++;
                }
                one = max(one,len);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                int len = 0;
                while(s[i]=='0')
                {
                    i++;
                    len++;
                }
                zero = max(zero,len);
            }
        }
        return one>zero;
    }
};
