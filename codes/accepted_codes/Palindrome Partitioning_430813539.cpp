class Solution {
public:
    bool check_palindrome(string a)
    {
        string rev = string(a.rbegin(),a.rend());
        if(a.compare(rev)==0)
            return true;
        else
            return false;           
    }
    void find_all(string s,vector<vector<string>> &ans,vector<string> temp)
    {
        if(s.length()==0)
            ans.push_back(temp);
        for(int i=0;i<s.length();i++)
        {
            string left = s.substr(0,i+1);
            if(check_palindrome(left))
            {
                temp.push_back(left);
                find_all(s.substr(i+1,s.length()-1),ans,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        find_all(s,ans,temp);
        return ans;
    }
};
