class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int> s;
        queue<int> q;
        s.insert(0);
        for(int i:rooms[0])
            q.push(i);
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            s.insert(temp);
            for(int i=0;i<rooms[temp].size();i++)
            {
                if(s.find(rooms[temp][i])==s.end())
                    q.push(rooms[temp][i]);
            }
        }
        return s.size()==rooms.size();
    }
};
