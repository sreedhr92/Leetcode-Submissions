class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        size_t found = haystack.find(needle); 
        if (found != string::npos) 
            return found;
        return -1;
        
    }
};
