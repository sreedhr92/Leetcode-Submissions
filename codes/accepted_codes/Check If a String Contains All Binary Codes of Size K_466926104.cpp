class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<string,int> hash;
        int temp=k;
        int j;
        for(int i=0;i<s.size();i++)
        {
            string sub;
            j=i;
            while(temp && i+k<=s.size())
            {
                sub.push_back(s[j]);
                temp--;
                j++;
            }
            temp=k;
            if(sub.size()!=0)
                hash[sub]++;  
        }
        return hash.size()==pow(2,temp) ? true:false;
    }
};
