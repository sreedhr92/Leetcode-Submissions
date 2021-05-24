class Solution {
public:
    int romanToInt(string s) {
        int output=0,curr=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='M')
                output+=1000;
            else if(s[i]=='D')
                output+=500;
            else if(s[i]=='L')
                output+=50;
            else if(s[i]=='V')
                output+=5;
            else
            {
                curr=0;
                if(s[i]=='C')
                {
                    while(s[i]=='C'&&i<s.size())
                    {
                        curr+=100;
                        i++;
                    }
                    if(i<s.size() && (s[i]=='M'||s[i]=='D'))
                        curr*=-1;
                    output+=curr;
                    i--;
                }
                else if(s[i]=='X')
                {
                    while(s[i]=='X'&&i<s.size())
                    {
                        curr+=10;
                        i++;
                    }
                    if(i<s.size() && (s[i]=='L'||s[i]=='C'))
                        curr*=-1;
                    output+=curr;
                    i--;
                }
                else if(s[i]=='I')
                {
                    while(s[i]=='I'&&i<s.size())
                    {
                        curr+=1;
                        i++;
                    }
                    if(i<s.size() && (s[i]=='V'||s[i]=='X'))
                        curr*=-1;
                    output+=curr;
                    i--;
                }
            }
        }
        return output;
        
    }
};
