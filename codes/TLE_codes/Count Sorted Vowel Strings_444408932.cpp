class Solution {
public:
    vector<char> vowels = {'a','e','i','o','u'};
    int output=0;
    void count(int n,char last,vector<int> &dp)
    {
        if(n==0)
         {output++;   return;}
        vector<char> vow;
        for(char ch:vowels)
        {
            if(ch >= last)
            {
                //dp[n]++;
                vow.push_back(ch);
            }  
        }
        for(char ch:vow)
          count(n-1,ch,dp);
        return;

    }         
               
       
                
    int countVowelStrings(int n) {
        cout<<"hi"<<endl;
        vector<int> dp(n+1,0);
        count(n,'a',dp);
       //for(auto it:dp)
           // cout<<it<<endl;
        return output;
        
    
        
        
    }
};
