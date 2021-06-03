class Solution {
public:
    unordered_map<string,bool> dp;
    bool solve(string s1,string s2,string s3,int k)
    {
        if(dp.find(s1+'#'+s2)!=dp.end())
        {
            //cout<<" test";
            return dp[s1+'#'+s2];
        }
        int i=0,j=0;
        while(k<s3.size())
        {
            if(s1[i]==s3[k] and s2[j]==s3[k])
            {
                dp[s1.substr(i+1)+'#'+s2.substr(j)] = solve(s1.substr(i+1),s2.substr(j),s3,k+1);
                dp[s1.substr(i)+'#'+s2.substr(j+1)] =solve(s1.substr(i),s2.substr(j+1),s3,k+1);
                return dp[s1.substr(i+1)+'#'+s2.substr(j)] or dp[s1.substr(i)+'#'+s2.substr(j+1)];
            }
            if(s1[i]==s3[k])
                i++;
            else if(s2[j]==s3[k])
                j++;
            else
            {
                dp[s1.substr(i)+'#'+s2.substr(j)]=false;
                return false;
            }
            k++;
        }
        dp[s1+'#'+s2]=true;
        return true;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int a[26]={0},b[26]={0};
        for(char ch:s1)
            a[ch-'a']++;
        for(char ch:s2)
            a[ch-'a']++;
        for(char ch:s3)
            b[ch-'a']++;
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        //bool res1=true,res2=true;
        return solve(s1,s2,s3,0);
        // while(k<s3.size())
        // {
        //     if(s1[i]==s3[k])
        //         i++;
        //     else if(s2[j]==s3[k])
        //         j++;
        //     else
        //         res1=false;
        //     k++;
        // }
        // i=0,j=0,k=0;
        // while(k<s3.size())
        // {
        //     if(s2[i]==s3[k])
        //         i++;
        //     else if(s1[j]==s3[k])
        //         j++;
        //     else
        //         res2=false;
        //     k++;
        // }
        //return res1 or res2;
    }
};
/*
"aabcc"
"dbbca"
"aadbbcbcac"
"aabcc"
"dbbca"
"aadbcbbcac"
""
"a"
"a"
"a"
"a"
""
"a"
""
"b"
"aabcc"
"dbbca"
"aadbbbaccc"
"bbbbbabbbbabaababaaaabbababbaaabbabbaaabaaaaababbbababbbbbabbbbababbabaabababbbaabababababbbaaababaa"
"babaaaabbababbbabbbbaabaabbaabbbbaabaaabaababaaaabaaabbaaabaaaabaabaabbbbbbbbbbbabaaabbababbabbabaab"
"babbbabbbaaabbababbbbababaabbabaabaaabbbbabbbaaabbbaaaaabbbbaabbaaabababbaaaaaabababbababaababbababbbababbbbaaaabaabbabbaaaaabbabbaaaabbbaabaaabaababaababbaaabbbbbabbbbaabbabaabbbbabaaabbababbabbabbab"
"aabcc"
"dbbca"
"aadbbcbcac"
"aabcc"
"dbbca"
"aadbbbaccc"
"abaaacbacaab"
"bcccababccc"
"bcccabaaaaabccaccbacabb"
"bbbbbabbbbabaababaaaabbababbaaabbabbaaabaaaaababbbababbbbbabbbbababbabaabababbbaabababababbbaaababaa"
"babaaaabbababbbabbbbaabaabbaabbbbaabaaabaababaaaabaaabbaaabaaaabaabaabbbbbbbbbbbabaaabbababbabbabaab"
"babbbabbbaaabbababbbbababaabbabaabaaabbbbabbbaaabbbaaaaabbbbaabbaaabababbaaaaaabababbababaababbababbbababbbbaaaabaabbabbaaaaabbabbaaaabbbaabaaabaababaababbaaabbbbbabbbbaabbabaabbbbabaaabbababbabbabbab"
*/