class Solution {
public:
    int countBinarySubstrings(string s) {
        int c1 = 0, c2 = 0, res = 0;
        for(int i=0; i<s.size();)
        {
            char c = s[i];
            while(i<s.size() && s[i] == c) i++, c2++;
            res += min(c1, c2);
            c1 = c2;
            c2 = 0;
        }
        return res;
    }
};
