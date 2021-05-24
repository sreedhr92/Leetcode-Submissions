class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<bool> visited(strs.size(),false);
        vector<vector<string>> output;
        for(int i=0;i<strs.size();++i)
        {
            if(visited[i])
                continue;
            vector<string> a;
            int len1 = strs[i].size();
            vector<int> hash(26,0);
            a.push_back(strs[i]);
            for(auto ch:strs[i])
                hash[ch-'a']++;
            for(int j=i+1;j<strs.size();j++)
            {
                int len2 = strs[j].size();
                if(len1!=len2)
                    continue;
                vector<int> h(26,0);
                int flag =0;
                for(auto ch:strs[j])
                    h[ch-'a']++;
                for(int k=0;k<26;k++)
                {
                    if(hash[k]!=h[k])
                    {
                        flag=1;
                        break;
                    }
                }
                if(!flag)
                {
                    a.push_back(strs[j]);
                    visited[j]=true;
                }
            }
            output.push_back(a);
        }
        return output;
    }
};
