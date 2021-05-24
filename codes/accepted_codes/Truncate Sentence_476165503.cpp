class Solution {
public:
    string truncateSentence(string s, int k) {
        int space=0;
        string output="";
        for(char ch:s)
        {
            if(ch==' ')
                space++;
            if(space==k)
                break;
            output+=ch;
        }
        //cout<<output<<endl;
        return output;
    }
};
