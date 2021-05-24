class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<string> output;
        vector<int> b(26,0);
        for(int i=0;i<B.size();++i)
        {
            int temp[26]={0};
            for(char ch:B[i])
                temp[ch-'a']++;
            for(int j=0;j<26;j++)
                b[j]=max(temp[j],b[j]);
        }
        for(int i=0;i<A.size();++i)
        {
            vector<int> a(26,0);
            int f=0;
            for(char ch:A[i])
                a[ch-'a']++;
            for(int j=0;j<26;j++)
            {
                if(a[j]-b[j]<0)
                {
                    f=1;
                    break;
                }
            }
            if(!f)
                output.push_back(A[i]);
        }
        return output;
    }
};
