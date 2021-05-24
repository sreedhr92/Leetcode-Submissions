class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.size() < 2)
            return s.size();
        
        unordered_map<char, pair<int, int>> mp;
        int len = INT_MIN;
        int l=0, r=0;
        while(l<=r && r<s.size())
        {
            if(mp.find(s[r])!=mp.end())
            {
                len = max(len, r-l);
                while(l<mp[s[r]].first + 1) 
                    mp.erase(s[l++]);
            }
            mp[s[r]] = {r, 1};
            r++;
        }
        len = max(len, r-l);
        return len;
    }
};
