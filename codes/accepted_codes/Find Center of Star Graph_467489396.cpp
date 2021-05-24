class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int m=0;
        int n=0;
        unordered_map<int,int> hash;
        for(int i=0;i<edges.size();i++)
        {
            hash[edges[i][0]]++;
            hash[edges[i][1]]++;
        }
        for(auto i:hash)
        {
            if(i.second>m)
            {
                m=i.second;
                n=i.first;
            }
        }
        return n;
    }
};
