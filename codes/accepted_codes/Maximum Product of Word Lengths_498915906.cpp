class Solution {
public:
    int max(int a,int b)
    {
        if(a<b)
            return b;
        return a;
    }    
    int maxProduct(vector<string>& words) {
        int output=0;
        for(int i=0;i<words.size();i++)
        {
            unordered_set<char> s;
            for(char ch:words[i])
                s.insert(ch);
            for(int j=i+1;j<words.size();j++)
            {
                int flag=0;
                for(char ch:words[j])
                {
                    if(s.find(ch)!=s.end())
                    {
                        flag=1;
                        break;
                    }
                }
                if(!flag)
                    output=max(output,words[i].size()*words[j].size());
            }
        }
        return output;
    }
};