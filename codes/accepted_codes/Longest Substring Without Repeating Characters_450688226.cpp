class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=0;
        int slow = 0;
        unordered_map<char,bool> hash;
        for(int high=0;high<s.size();high++)
        {
            while(hash[s[high]])
            {
                hash[s[slow]]=false;
                slow++;
            }
            hash[s[high]]=true;
            if(high-slow+1>n)
                n = high-slow+1;
        }
        return n;
    }
};
