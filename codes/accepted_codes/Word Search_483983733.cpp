class Solution {
public:
    bool output=false;
    vector<vector<int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
    void dfs(vector<vector<char>>& board,int i,int j,string temp,string &word,vector
        <vector<int>> &visited,int pos)
    {
        if(temp.compare(word)==0)
        {
            output=true;
            return;
        }
        if(temp.size()>word.size() || word[pos]!=board[i][j])
            return;
        for(int k=0;k<dir.size();k++)
        {
            int x=dir[k][0]+i;
            int y=dir[k][1]+j;
            if(x<board.size() && y<board[0].size() && !visited[x][y])
            {
                temp+=board[x][y];
                visited[x][y]=1;
                dfs(board,x,y,temp,word,visited,pos+1);
                if(output)
                    break;
                temp.pop_back();
                visited[x][y]=0;
            }
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        unordered_map<char,int> h1,h2;
        for(char ch:word)
            h1[ch]++;
        for(auto i:board)
        {
            for(char ch:i)
                h2[ch]++;
        }
        for(char ch:word)
        {
            if(h2.find(ch)==h2.end())
                return false;
            else if(h1[ch]>h2[ch])
                return false;                
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                string temp="";
                temp+=board[i][j];
                vector<vector<int>> visited(board.size(),vector<int>(board[0].size
                    (),0));
                visited[i][j]=1;
                dfs(board,i,j,temp,word,visited,0);
                if(output)
                    return true;
            }
        }
        return false;
    }
};
