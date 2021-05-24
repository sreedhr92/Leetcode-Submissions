class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> output;
        int a[26]  = {0};
        for(char ch:pattern)
            a[ch-'a']++;
        string p;
        for(char ch:pattern)
            p+=to_string(a[ch-'a']);
        for(string s:words)
        {
            int b[26]={0};
            for(char ch:s)
                b[ch-'a']++;
            string temp;
            for(char ch:s)
                temp+=to_string(b[ch-'a']);            
            if(p.compare(temp)==0)
            {
                int flag = 0;
                for(int i=0;i<s.size()-1;i++)
                {
                    if(s[i]==s[i+1] and pattern[i]!=pattern[i+1])
                        flag=1;
                }
                if(flag==0)
                    output.push_back(s);
            }
        }
        return output;
    }
};
