class Solution {
public:
    int helper(string &s,char ch)
    {
        int count = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch && i%2!=0)
                count++;
        }
        return count;
    }
    
    
    int minSwaps(string s) {
        int one =0;
        int zero=0;
        int n=s.size();
        for(char ch:s)
        {
            if(ch=='1')
                one++;
            else
                zero++;
        }
        if(abs(one-zero)>1)
            return -1;
        if(one>zero) return helper(s,'1');
        else if(one<zero) return helper(s,'0');
        else return min(helper(s,'1'),helper(s,'0'));
        
    }
};
