class Solution {
public:
    vector<vector<string>> output;
    bool is_safe(vector<string> &board,int r,int c)
    {
        int i,j;
        for(int a=0;a<c;a++)
            if (board[r][a]=='Q')
                return false;
        i=r;
        j=c;
        while(i>=0 && j>=0)
        {
            if (board[i][j]=='Q')
                return false;
            i-=1;
            j-=1;
        }
        i=r;
        j=c;
        while (j>=0 && i< board.size())
        {
            if (board[i][j]=='Q')
                return false;
            i+=1;
            j-=1;
        }
        return true;
    }
    void solve(vector<string> &board,int c)
    {
        if(c==board.size())
        {
            output.push_back(board);
            return;
        }
        for(int i=0;i<board.size();i++)
        {
            if(is_safe(board,i,c))
            {
                board[i][c]='Q';
                solve(board,c+1);
                board[i][c]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string temp;
        for(int i=0;i<n;i++)
            temp+='.';
        vector<string> board(n,temp);
        solve(board,0);
        return output;
    }
};
