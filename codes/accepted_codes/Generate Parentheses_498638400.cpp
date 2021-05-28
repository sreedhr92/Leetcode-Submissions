class Solution {
public:
    vector<string> output;
    int len;
    void generate(int open,int close,string &temp)
    {
        if(open==close and temp.size()!=0 and temp.back()=='(')
            return;
        if(temp.size()==len)
            output.push_back(temp);
        if(open>0)
        {
            temp+='(';
            open--;
            generate(open,close,temp);
            temp.pop_back();
            open++;
        }
        if(close>0)
        {
            temp+=')';
            close--;
            generate(open,close,temp);
            temp.pop_back();
            close++;
        } 
    }
    vector<string> generateParenthesis(int n) {
        len=2*n;
        string temp;
        generate(n,n,temp);
        return output;        
    }
};