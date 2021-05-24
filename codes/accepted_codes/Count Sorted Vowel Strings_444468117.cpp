class Solution {
public:
    int countVowelStrings(int n) {
        int cnt = 0;        
        int pre_char = -1;
        dfs(n, 0, cnt, pre_char);
        return cnt;
    }
    
private:
    
    void dfs(const int n, int depth, int& cnt, int pre_char){
        if(depth == n){            
            cnt++;
            return;
        }
        
        for(int i = max(0, pre_char); i < 5; i++)
                dfs(n, depth + 1, cnt, i);                            
    }
};
