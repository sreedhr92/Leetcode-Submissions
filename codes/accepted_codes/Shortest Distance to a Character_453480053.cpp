class Solution {
public:
    int find_next(string &s,int start,char c)
    {
        for(int i=start+1;i<s.size();i++)
        {
            if(s[i]==c)
                return i;
        }
        return INT_MAX;
    }
    vector<int> shortestToChar(string s, char c) {
        int prev=0,next=INT_MIN;
        vector<int> output;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(c==s[i])
            {
                prev =i;
                flag=1;
                output.push_back(0);
            }
            else
            {
                if(i>=next)
                    next = find_next(s,i,c);
                if(!flag)
                    output.push_back(next-i);
                else
                    output.push_back(min(i-prev,next-i));
            }
        }
        return output;
    }
};
