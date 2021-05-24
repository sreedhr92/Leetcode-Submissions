class Solution {
public:
    string decodeAtIndex(string S, int K) {
        size_t i = 0;
        string output;
        if(K==1)
        {   output+=S[i];
            return output;}
        for(char ch:S)
        {
            if(isdigit(ch))
                i*=(ch-'0');
            else
                i++;
        }
        for(int j=S.size()-1;j>=0;j--)
        {
            K%=i;
            if(K==0 && isalpha(S[j]))
                {output+=S[j];break;}
            if(isdigit(S[j]))
                i/= (S[j]-'0');
            else
                i--;
        }
        return output;
    }
};
