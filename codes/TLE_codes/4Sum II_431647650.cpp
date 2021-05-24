class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D
        ) {
        vector<int> l1,l2;
        int count=0;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
            {
                l1.push_back(A[i]+B[j]);
            }
        }
        for(int i=0;i<C.size();i++)
        {
            for(int j=0;j<D.size();j++)
            {
                l2.push_back(C[i]+D[j]);
            }
        }
        for(int i=0;i<l1.size();i++)
        {
            for(int j=0;j<l2.size();j++)
                if(l1[i]+l2[j]==0) count++;
        }
        return count;
        
        
    }

