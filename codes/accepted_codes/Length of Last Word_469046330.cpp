class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int end=0;
        for(int i=s.size()-1;i>=0;--i)
        {
            if(s[i]!=' ')
            {
                end=i;
                break;
            }
        }
        for(int i=end;i>=0;--i)
        {
            if(isalpha(s[i]))
                len++;
            else if(s[i]==' ')
                return len;
        }
        return len;
    }
};
