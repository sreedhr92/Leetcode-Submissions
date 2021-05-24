class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> s;
        int flag=1;
        for(auto word:wordList)
        {
            if(endWord.compare(word)==0)
                flag=0;
            s.insert(word);
        }
        if(flag)
            return 0;
        queue<string> q;
        q.push(beginWord);
        int depth = 0;
        while(!q.empty())
        {
            depth+=1;
            int lsize = q.size();
            while(lsize--)
            {
                string current = q.front();
                q.pop();
                for(int i=0;i<current.length();i++)
                {
                    string temp = current;
                    for(char ch = 'a';ch<='z';ch++)
                    {
                        temp[i] = ch;
                        if(temp.compare(current)==0)
                            continue;
                        if(temp.compare(endWord)==0)
                            return depth+1;
                        if(s.find(temp)!=s.end())
                        {
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
