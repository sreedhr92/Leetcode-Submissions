class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0;
        int b=0;
        char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<s.size()/2;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(s[i]==vowel[j])
                {
                    a++;
                    break;
                }
            }
        }
        for(int i=s.size()/2;i<s.size();i++)
        {
            for(int j=0;j<10;j++)
            {
                if(s[i]==vowel[j])
                {
                    b++;
                    break;
                }
            }
        }
        return a==b;
    }
};
