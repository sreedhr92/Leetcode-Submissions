class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> mystack;
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/')
               continue;
            string s="";
            while(i<n && path[i]!='/')
            {
                s+=path[i];
                i++;
            }
            i--;
            if(s==".")
               continue;
            if(s=="..")
            {
                if(!mystack.empty())
                    mystack.pop();
                continue;
            }
            mystack.push(s);            
        }
        if(mystack.empty())
            return "/";
        string output="";
        while(!mystack.empty())
        {
            output = "/" + mystack.top() + output;
            mystack.pop();
        }
        return output;
        
    }
};
