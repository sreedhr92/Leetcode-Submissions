class Solution {
public:
    bool reorderedPowerOf2(int N) {
        vector<int> range;
        for(int i=0;i<31;i++)
            range.push_back(pow(2,i));
        set<vector<int>> s;
        for(int i:range)
        {
            vector<int> a(10,0);
            while(i)
            {
                a[i%10]++;
                i/=10;
            }
            s.insert(a);
        }
        vector<int> a(10,0);
        while(N)
        {
            a[N%10]++;
            N/=10;
        }
        if(s.find(a)!=s.end())
            return true;
        return false;
        
    }
};
