class Solution {
public:
        
    void gameOfLife(vector<vector<int>>& board) {
        
        vector<vector<int>> state = board;
        
        int r = board.size();
        int c = board[0].size();
        
        for(int i=0; i<r; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                int live = 0;
                
                for(int a=-1; a<2; a++)
                    for(int b=-1; b<2; b++)
                        if(!(a==0 && b==0) && i+a<r && i+a>-1 && j+b<c && j+b>-1 && 
                            state[i+a][j+b])
                            live++;
                
                if(state[i][j]) {
                    if(live<2 || live>3)
                        board[i][j] = 0;
                } else {
                    if(live == 3)
                        board[i][j] = 1;
                }
            }
        }
        
    }
};
