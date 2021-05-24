class Solution {
public:
    vector<char> a = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                      'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string getSmallestString(int n, int k) {
        vector<char> s(n,'a');
        k-=n;
        int ind = n-1;
        while(k!=0)
        {
            if(k>=25)
            {
                s[ind] = a[25]; 
                k-=25;
                ind--;
            }
            else
            {
                s[ind] = a[k];
                k=0;                
            }
        }
        string output="";
        for(char ch:s)
            output+=ch;
        return output;
    }
};
