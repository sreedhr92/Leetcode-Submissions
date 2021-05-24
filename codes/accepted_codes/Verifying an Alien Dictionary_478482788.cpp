class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> hash;
        int o=0;
        for(char ch:order)
            hash[ch]=o++;
        for(int i=0;i<words.size()-1;i++)
        {
            int j=0,k=0;
            while(j<words[i].size() && k<words[i+1].size() && words[i][j]==words[i
                +1][k])
            {
                j++;
                k++;
            }
            if(j<words[i].size() && k<words[i+1].size())
            {
                char a = words[i][j];
                char b = words[i+1][k];
                if(hash[a]>hash[b])
                    return false;
            }
            else if(j==k)
            {
                if(words[i].size()>words[i+1].size())
                    return false;
            }
        }
        return true;
    }
};
