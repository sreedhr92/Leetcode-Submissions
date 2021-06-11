
class Solution {
public:
    void rotate(vector<vector<int>> &mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=i;j<mat.size();j++)
                swap(mat[i][j],mat[j][i]);
        }
        for(int i=0;i<mat.size();i++)
            reverse(mat[i].begin(),mat[i].end());
    }
    bool is_same(vector<vector<int>> &mat,vector<vector<int>> &target)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if(mat[i][j]!=target[i][j])
                    return false;
            }

        }
        //cout<<"True is there"<<endl;
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++)
        {
            rotate(mat);
            if(is_same(mat,target))
                return true;
        }

        return false;
    }
};