class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(auto ch :s)
        {
            if(isalpha(ch)||isdigit(ch))
               a+=tolower(ch);
        }
        cout<<a;
        int left=0,right=a.length()-1;
        while(left<right)
        {
            if(a[left]!=a[right])
                return false;
            left++;
            right--;
        }
        return true;
        
    }
};
