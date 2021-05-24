class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0;
        int b=0;
        char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0,k=s.size()/2;i<s.size()/2&&k<s.size();i++,k++)
        {
            for(int j=0;j<10;j++)
            {
                if(s[i]==vowel[j])
                    a++;
                if(s[k]==vowel[j])
                    b++;
            }
        }
        return a==b;
    }
};
