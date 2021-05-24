class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> hash;
        for(char ch : s)
            hash[ch]++;
        char index;
        for(auto i :hash)
        {
            if(i.second==1)
                 index = i.first;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==index)
                return i;
        }
        return -1;
        
    }
};
