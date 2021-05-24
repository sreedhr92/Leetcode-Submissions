class Solution {
public:
    int total=0;
    set<pair<int,int>> visited;
    int countSubstrings(string s) {
        for(int i=0;i<s.size();i++)
        {
            expand(s,i,i);
            expand(s,i,i+1);
        }
        return total;
               
    }
    void expand(string &s,int start,int end)
    {
        while(start>=0 && end < s.size() && s[start]==s[end])
        {
            if(visited.find({start,end})==visited.end()){
                total++;
                visited.insert({start,end});
            }
            end++;
            start--;
        }
    }
};
