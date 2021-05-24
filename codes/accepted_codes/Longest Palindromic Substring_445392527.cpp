class Solution {
public:
    //Approach: Consider each single element as palindrome and expand towards its 
        left and right to check 
    //if first and last character match
    string longestPalindrome(string s) {
        int n = s.length();int low,high;int start=0,maxlen=1;
        for(int i = 0;i < n;i++)
        {
//considering the spaces between two characters as palindrome and expanding towards 
    its left and right
            low = i-1,high=i;
            while(low >= 0 && high < n && (s[low] == s[high]))
            {
//as long as first and last characters keep matching update the maximum length of 
    palindrome           
               if((high-low)+1 > maxlen)
                {
                    start = low;maxlen = (high-low)+1;
                }
                low--;high++;
            }
//considering each character as palindrome and expanding towards its left and right
            low = i-1,high=i+1;
            while(low >= 0 && high < n && (s[low] == s[high]))
            {
                if((high-low)+1 > maxlen)
                {
                    start = low;maxlen = (high-low)+1;
                }
                low--;high++;
            }
        }
        
        string res="";
        for(int i = start;i < (start+maxlen);i++) res+= s[i];
        return res;
    }
};
