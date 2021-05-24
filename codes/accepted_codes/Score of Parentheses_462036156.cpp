class Solution {
public:
    int scoreOfParentheses(string S) {
        int score=0;
        int depth=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='(')
                depth++;
            else
            {
                depth--;
                if(S[i-1]=='(')
                    score+=1<<depth;
            }
        }
        return score;
    }
};
