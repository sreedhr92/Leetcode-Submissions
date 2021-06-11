class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0)
            return tasks.size();
        int a[26]={0};
        int m = 0;
        for(char ch:tasks)
        {
            a[ch-'A']++;
            m = max(m,a[ch-'A']);
        }
        int output = (m-1)*(n+1);
        for(int i=0;i<26;i++)
            if(m==a[i])
                output++;

        return max((int)tasks.size(),output);
    }
};