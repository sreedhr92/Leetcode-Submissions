class WordFilter {
public:
    unordered_map<string,int> hash;
    WordFilter(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            for(int j=1;j<=words[i].size();j++)
            {
                string prefix = words[i].substr(0,j);
                for(int k=0;k<words[i].size();k++)
                {
                    string suffix = words[i].substr(k,words[i].size());
                    hash[prefix +"#"+ suffix] = i+1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        string temp = prefix + "#" + suffix;
        return hash[temp]-1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
