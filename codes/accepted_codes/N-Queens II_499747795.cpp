class Solution {
public:
    int output=0;
    bool is_safe(vector<vector<int>> &board,int r,int c)
    {
        for(int a=0;a<board.size();a++)
        {
            if(board[r][a])
                return false;
        }
        int i=r;
        int j=c;
        while(i>=0 and j>=0)
        {
            if(board[i][j])
                return false;
            i--;
            j--;
        }
        i=r;
        j=c;
        while(i<board.size() and j>=0 )
        {
            if(board[i][j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    void solve(vector<vector<int>> &board,int c)
    {
        if(c>=board.size())
        {
            output++;
            return;
        }
        for(int i=0;i<board.size();i++)
        {
            if(is_safe(board,i,c))
            {
                board[i][c]=1;
                solve(board,c+1);
                board[i][c]=0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<int>> board(n,vector<int>(n,0));
        solve(board,0);
        return output;
        
    }
};