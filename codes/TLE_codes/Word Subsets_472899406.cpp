class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<string> output;
        for(int i=0;i<A.size();++i)
        {
            vector<int> a(26,0);
            int f=0;
            for(char ch:A[i])
                a[ch-'a']++;
            for(int j=0;j<B.size();j++)
            {
                vector<int> b=a;
                for(char ch:B[j])
                {
                    b[ch-'a']--;
                    if(b[ch-'a']<0)
                    {
                        f=1;
                        break;
                    }
                }
                if(f)
                    break;                  
            }
            if(!f)
                output.push_back(A[i]);
        }
        return output;
    }
};
