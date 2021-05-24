class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        if(strs.size()==1)
            return strs[0];
        string a="";
        int n = strs.size();
        int j=0;
        int flag;
        char b;
        while(1)
        {
            //cout<<"string = "<<a<<" j = "<<j<<endl;
            if(j==strs[0].length())
                break;
            b = strs[0][j];
            flag = 0;
            //cout<<"string = a"<<a<<" j = "<<j<<endl;
            for(int i=1;i<n;i++)
            {
                if(b!=strs[i][j] || j==strs[i].length())
                {
                    flag = 1;
                    break;
                }
            }
            //cout<<"string = a"<<a<<" j = "<<j<<endl;
            if(flag)
                break;
            a+=b;
            //cout<<"string = a"<<a<<" j = "<<j<<endl;
            j++;
        }
        
        return a;
    }
};
