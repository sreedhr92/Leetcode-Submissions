class Solution {
public:
    bool check_row(vector<vector<char>>& board,char ch,int c)
    {
        int count =0;
        for(int i=0;i<9;i++)
        {
            if(board[i][c]==ch)
                count++;
        }
        if(count==1)
            return true;
        else
            return false;
    }
        
    bool check_column(vector<vector<char>>& board,char ch,int r)
    {
        int count =0;
        for(int i=0;i<9;i++)
        {
            if(board[r][i]==ch)
                count++;
        }
        if(count==1)
            return true;
        else
            return false;
    }
    bool check_box(vector<vector<char>>& board,char ch,int r,int c)
    {
        int count=0;
        for(int i=r;i<r+3;i++)
        {
            for(int j=c;j<c+3;j++)
            {
                if(board[i][j]==ch)
                    count++;
            }
        }
        if(count==1)
            return true;
        else
            return false;
        
    }
        
    bool isValidSudoku(vector<vector<char>>& board) {
        int r,c;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                r=i/3;
                r*=3;
                c=j/3;
                c*=3;
                if(board[i][j]=='.')
                    continue;
                if(!(check_row(board,board[i][j],j) && check_column(board,board[i][j]
                    ,i) && check_box(board,board[i][j],r,c)))
                    return false;
            }
        }
        return true;
        
    }
};
