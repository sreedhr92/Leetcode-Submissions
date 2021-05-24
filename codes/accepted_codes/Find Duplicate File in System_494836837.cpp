class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>> hash;
        vector<vector<string>> output;
        for(string s:paths)
        {
            string dir;
            int f = 0;
            for(int i=0;i<s.size();i++)
            {
                char ch = s[i];
                if(ch==' ')
                {
                    string file;
                    string content;
                    f=1;
                    i++;
                    while(i<s.size() && s[i]!='(')
                    {
                        file+=s[i];
                        i++;
                    }
                    i++;
                    while(i<s.size() && s[i]!=')')
                    {
                        content+=s[i];
                        i++;
                    }
                    hash[content].push_back(dir+"/"+file);
                }
                else if(!f)
                    dir+=ch;
            }
        }
        for(auto i:hash)
        {
            if(i.second.size()>1)
                output.push_back(i.second);
        }
        return output;
        
    }
};
