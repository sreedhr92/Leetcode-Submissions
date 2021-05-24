class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<pair<int,int>> temp;
        for(int i=0;i<B.size();++i)
            temp.push_back({B[i],i});
        sort(A.begin(),A.end());
        sort(temp.begin(),temp.end());
        vector<int> output(A.size());
        int l=0,r=A.size()-1,i=A.size()-1;
        while(i>=0)
        {
            if(A[r]<=temp[i].first)
                output[temp[i].second]=A[l++];
            else
                output[temp[i].second]=A[r--];
            i--;
        }  
        return output;
    }
};
