class Solution {
public:
    
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> hash;
        int max_holes=0;
        for(int i=0;i<wall.size();++i)
        {
            int sum=0;
            for(int j=0;j<wall[i].size()-1;++j)
            {
                sum+=wall[i][j];
                hash[sum]++;
                max_holes = max(max_holes,hash[sum]);
            }
        }
        return wall.size()-max_holes;
    }
};

