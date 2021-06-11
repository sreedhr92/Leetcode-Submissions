class Solution {
public:
    vector<string> get_neighbors(string node)
    {
        string temp = node;
        vector<string> set;
        for(int i=0;i<4;i++)
        {
            if(node[i]=='0')
            {
                node[i]='9';
                set.push_back(node);
                node[i]='1';
                set.push_back(node);
            }
            else if(node[i]=='9')
            {
                node[i]='0';
                set.push_back(node);
                node[i]='8';
                set.push_back(node);
            }
            else
            {
                node[i]=char(node[i]+1);
                set.push_back(node);
                node[i]=char(node[i]-2);
                set.push_back(node);
            }
            node = temp;
        }
        return set;
    }
    int openLock(vector<string>& deadends, string target) {
        unordered_map<string,bool> dp;
        for(string s:deadends)
            dp[s]=true;
        string start = "0000";
        if(dp[start]==true)
            return -1;
        queue<pair<int,string>> q;
        q.push({0,start});
        while(!q.empty())
        {
            pair<int, string> current = q.front();
            q.pop();
            dp[current.second]=true;
            if(current.second==target)
                return current.first;
            int val = current.first;
            for(string s:get_neighbors(current.second))
            {
                if(dp[s] == false)
                {
                    q.push({val+1,s});
                    dp[s]=true;
                }
            }
        }
        return -1;
    }
};