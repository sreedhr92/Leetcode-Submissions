class Solution {
public:
    string temp;
    string output;
    bool completed(vector<bool> &visited)
    {
        for(bool i:visited)
        {
            if(!i)
                return false;
        }
        return true;
    }
    void helper(vector<string> &words,vector<bool> &visited)
    {
        if(completed(visited))
        {
            //cout<<temp<<endl;
            output = temp.size() < output.size() ? temp:output;
            for(bool i:visited)
                i=false;
            temp="";
            return;
        }
        for(int i=0;i<words.size();i++)
        {
            if(visited[i])
                continue;
            if(temp.size()==0)
            {
                temp+=words[i];
                visited[i]=true;
                helper(words,visited);
                temp="";
                visited[i]=false;
                continue;
            }
            string a = words[i];
            int flag=0;
            for(int j=a.size()-1;j>=0;j--)
            {
                int k=temp.size()-1;
                int end=j;
                if(a[end]==temp[k])
                {
                    while(end>=0 && k>=0 && a[end]==temp[k])
                    {
                        end--;
                        k--;
                    }
                    if(abs(j-end)>1)
                        flag=1;
                    if(end==-1)
                    {
                        visited[i]=true;
                        string t = temp;
                        temp+=a.substr(j+1);
                        helper(words,visited);
                        temp = t;
                        visited[i]=false;
                        //break;
                    }
                }
            }
            if(flag==0)
            {
                visited[i]=true;
                string t = temp;
                temp+=words[i];
                helper(words,visited);
                temp = t;
                visited[i]=false;
            }
        }
    }
    string shortestSuperstring(vector<string>& words) {
        vector<bool> visited(words.size(),false);
        for(string s:words)
            output+=s;
        helper(words,visited);   
        return output;
    }
};
