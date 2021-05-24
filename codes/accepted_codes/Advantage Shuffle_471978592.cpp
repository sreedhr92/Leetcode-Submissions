class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<pair<int,int>> temp;
        for(int i=0;i<B.size();++i)
            temp.push_back({B[i],i});
        sort(A.begin(),A.end());
        sort(temp.begin(),temp.end());
        vector<pair<int,int>> ans;
        vector<int> output;
        for(int i=A.size()-1;i>-1;i--)
        {
            if(A[i]<=temp[i].first)
            {
                int t = A[0];
                A.erase(A.begin());
                A.insert(A.begin()+i,t);
                ans.push_back({temp[i].second,A[i]});
            }
            else
                ans.push_back({temp[i].second,A[i]});
        }
        sort(ans.begin(),ans.end());
        for(auto it:ans)
            output.push_back(it.second);         
        return output;
    }
};
