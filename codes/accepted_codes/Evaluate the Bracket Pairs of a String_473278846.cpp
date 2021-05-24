class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> hash;
        for(int i=0;i<knowledge.size();i++)
            hash[knowledge[i][0]]=knowledge[i][1];
        string output="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                i++;
                string key="";
                while(s[i]!=')')
                {
                    key+=s[i];
                    i++;        
                }
                if(hash.find(key)==hash.end())
                    output+='?';
                else
                    output+=hash[key];                   
            }
            else
                output+=s[i];
        }
        return output;
        
    }
};
