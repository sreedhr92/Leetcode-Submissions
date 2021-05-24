class Solution {
public:
    bool output=false;
    vector<vector<int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
    void dfs(vector<vector<char>>& board,int i,int j,string temp,string &word,set
        <pair<int,int>> &visited)
    {
        if(temp.compare(word)==0)
        {
            output=true;
            cout<<temp<<endl;
            return;
        }
        if(temp.size()>word.size())
            return;
        for(int k=0;k<dir.size();k++)
        {
            int x=dir[k][0]+i;
            int y=dir[k][1]+j;
            if(x<board.size() && y<board[0].size() && visited.count({x,y})==0)
            {
                temp+=board[x][y];
                visited.insert({x,y});
                dfs(board,x,y,temp,word,visited);
                if(output)
                    break;
                temp.pop_back();
                visited.erase({x,y});
            }
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                string temp="";
                set<pair<int,int>> visited;
                temp+=board[i][j];
                visited.insert({i,j});
                dfs(board,i,j,temp,word,visited);
                if(output)
                    return true;
            }
        }
        return false;
    }
};
