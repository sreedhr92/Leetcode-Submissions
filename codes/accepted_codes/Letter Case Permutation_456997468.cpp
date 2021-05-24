class Solution {
public:
    vector<string> output;
    void back_track(string &S,int i)
    {
        if(i==S.size())
        {
            output.push_back(S);
            return;
        }
        back_track(S,i+1);
        if(isalpha(S[i]))
        {
            S[i]^=(1<<5);
            back_track(S,i+1);
        }
    }
    vector<string> letterCasePermutation(string S) {
        back_track(S,0);
        return output;
    }
};
