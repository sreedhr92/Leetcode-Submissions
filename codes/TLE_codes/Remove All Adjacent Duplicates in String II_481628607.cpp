class Solution {
public:
    string removeDuplicates(string s, int k) {
        if(s.size()<k)
            return s;
        int count=1;
        int i=0;
        int flag=0;
        for(i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                count++;
            else
                count=1;
            if(count==k)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            s.erase(s.begin()+i-k+1,s.begin()+i+1);
            return removeDuplicates(s,k);
        }
        return s;
        
        
    }
};
