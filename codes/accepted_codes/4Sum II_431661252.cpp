class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D
        ) {
        //vector<int> l1,l2;
        unordered_map<int,int> hash;
        int count=0;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
                    hash[-(A[i]+B[j])]++;
        }
        for(int i=0;i<C.size();i++)
        {
            for(int j=0;j<D.size();j++)
            {
                if(hash.find(C[i]+D[j])!=hash.end())
                {
                    count+=hash[C[i]+D[j]];
                }
            }
        }
        
        return count;
        
        
    }

