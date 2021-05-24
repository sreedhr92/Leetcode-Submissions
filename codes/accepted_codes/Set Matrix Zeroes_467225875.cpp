class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool r=false,c=false;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(!matrix[i][j] && i && j)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
                else if(!matrix[i][j] && (!i || !j))
                {
                    if(!i && j)
                        r=true;
                    else if(!j && i)
                        c=true;
                    else
                    {r=true;c=true;}
                        
                }
            }
        }
        for(int r=1;r<matrix.size();r++)
        {
            if(!matrix[r][0])
            {
                for(int i=1;i<matrix[0].size();i++)
                    matrix[r][i]=0;
            }
        }
        for(int c=1;c<matrix[0].size();c++)
        {
            if(!matrix[0][c])
            {
                for(int i=1;i<matrix.size();i++)
                    matrix[i][c]=0;
            }
        }
        if(r)
        {
            for(int i=0;i<matrix[0].size();i++)
                matrix[0][i]=0;
        }
        if(c)
        {
            for(int i=0;i<matrix.size();i++)
                matrix[i][0]=0;
        }
            
    }
};
