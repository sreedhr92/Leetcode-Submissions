class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string,int> hash;
        for(string s:words)
        {
            if(hash.find(s)==hash.end())
                hash[s]++;
        }
        sort(words.begin(),words.end(),
             [](const string &a,const string &b){
                 return a.size()>b.size();
             });
        int output=1;
        for(int i=0;i<words.size();++i)
        {
            for(int j=0;j<words[i].size();j++)
            {
                string temp = words[i];
                temp.erase(temp.begin()+j);
                if(hash.find(temp)!=hash.end())
                {
                    hash[temp] = max(hash[temp],hash[words[i]]+1);
                    output = max(output,hash[temp]);
                }
            }
        }
        return output;
    }
};
