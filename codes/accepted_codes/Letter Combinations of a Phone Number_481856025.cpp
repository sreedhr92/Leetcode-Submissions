class Solution {
public:
    void dfs(string &digits, vector<string> &output,string &temp,vector<vector<char>> 
        &phone,int k)
    {
        if(temp.size()==digits.size())
        {
            output.push_back(temp);
            return;
        }
        if(k==digits.size())
            return;
        int val = digits[k]-'0'-2;
        for(int j=0;j<phone[val].size();j++)
        {
            temp+=phone[val][j];
            dfs(digits,output,temp,phone,k+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        vector<vector<char>> phone(8);
        int start=97;
        for(int i=0;i<8;i++)
        {
            if(i==5 || i==7)
            {
                for(int j=0;j<4;j++,start++)
                    phone[i].push_back(char(start));
            }
            else
            {
                for(int j=0;j<3;j++,start++)
                    phone[i].push_back(char(start));                    
            }
        }
        vector<string> output;
        string temp="";
        dfs(digits,output,temp,phone,0);
        return output;   
    }
};
