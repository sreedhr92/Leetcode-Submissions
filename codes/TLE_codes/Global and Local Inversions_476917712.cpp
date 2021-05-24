class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int global=0;
        int local=0;
        for(int i=0;i<A.size();i++)
        {
            if(i+1<A.size() && A[i]>A[i+1])
                local++;
        }
        for(int i=0;i<A.size();i++)
        {
            for(int j=i+1;j<A.size();j++)
            {
                if(A[i]>A[j])
                    global++;
                if(global>local)
                    return false;
            }
        }
        return global==local;
        
    }
};
