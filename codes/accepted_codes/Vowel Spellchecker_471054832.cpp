class Solution {
public:
    string to_lower(string s)
    {
        for(int i=0;i<s.size();++i)
            s[i]=tolower(s[i]);
        return s;
    }
    string no_vowel(string s)
    {
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                s[i]='#';
        }
        return s;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> s;
        unordered_map<string,string> h1;
        unordered_map<string,string> h2;
        for(string word:wordlist)
        {
            s.insert(word);
            string temp = to_lower(word);
            if(h1.find(temp)==h1.end())
                h1[temp]=word;
            if(h2.find(no_vowel(temp))==h2.end())
                h2[no_vowel(temp)]=word;            
        }
        vector<string> output;
        for(string word:queries)
        {
            if(s.find(word)!=s.end())
            {
                output.push_back(word);
                continue;
            }
            string temp = to_lower(word);
            if(h1.find(temp)!=h1.end())
                output.push_back(h1[temp]);
            else if(h2.find(no_vowel(temp))!=h2.end())
                output.push_back(h2[no_vowel(temp)]);
            else
                output.push_back("");                
        }
        return output;
    }
};
