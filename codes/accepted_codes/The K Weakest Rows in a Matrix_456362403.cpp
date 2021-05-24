class Solution {
public:
    int get_soldiers(vector<int> row)
    {
        int count = 0;
        for(int i:row)
        {
            if(i)
                count++;
        }
        return count;            
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<pair<int,int>,int> m;
        vector<int> output;
        for(int i=0;i<mat.size();i++)
        {
            m[{get_soldiers(mat[i]),i}]++;
        }
        int c=0;
        for(auto i:m)
        {
            if(c==k)
                break;
            output.push_back(i.first.second);
            c++;
        }
        return output;
        
    }
};
