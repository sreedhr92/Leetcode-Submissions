class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> hash;
        int max_len=0;
        int start=-1;
        for(int i=0;i<s.size();i++)
        {
            if(hash.count(s[i])!=0)
                start = max(start,hash[s[i]]);
            hash[s[i]]=i;
            max_len = max(max_len,i-start);
        }
        return max_len;
    }
};
