class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(),false);
        queue<int> q;
        visited[0]=true;
        for(int i:rooms[0])
            q.push(i);
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            visited[temp]=true;
            for(int i=0;i<rooms[temp].size();i++)
            {
                if(!visited[rooms[temp][i]])
                    q.push(rooms[temp][i]);
            }
        }
        for(bool i:visited)
        {
            if(!i)
                return false;
        }
        return true;
    }
};
