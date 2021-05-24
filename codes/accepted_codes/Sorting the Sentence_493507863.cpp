class Solution {
public:
    string sortSentence(string s) {
        vector<string> output(10);
        output[0]="";
        string ans="";
        string temp="";
        int i=0;
        for(;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                temp="";
                continue;
            }
            if(isdigit(s[i]))
            {
                temp+=" ";
               output[s[i]-'0']=temp;
            }
            else
                temp+=s[i];
        }
        for(string s:output)
            ans+=s;
        ans.pop_back();
        return ans;
        
    }
};
