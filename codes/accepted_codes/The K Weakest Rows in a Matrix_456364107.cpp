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
        vector<pair<int,int>> soldier;
        vector<int> output;
        for(int i=0;i<mat.size();i++)
        {
            soldier.push_back({get_soldiers(mat[i]),i});
        }
        sort(soldier.begin(),soldier.end());
        int c=0;
        for(auto i:soldier)
        {
            if(c==k)
                break;
            output.push_back(i.second);
            c++;
        }
        return output;
        
    }
};
