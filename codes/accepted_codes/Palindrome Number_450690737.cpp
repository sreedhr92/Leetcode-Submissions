class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string s = to_string(x);
        string s1 = s;
        reverse(s1.begin(),s1.end());
        if(s1.compare(s)==0)
            return true;
        return false;
        
    }
};
