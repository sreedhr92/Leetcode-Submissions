class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        int i=0,j=0;
        vector<int> t1,t2;
        if(x!=1)
        {
            while(pow(x,i)<bound)
            {
                t1.push_back(pow(x,i));
                i++;
            }
        }
        if(y!=1)
        {
            while(pow(y,j)<bound)
            {
                t2.push_back(pow(y,j));
                j++;
            }   
        }
        if(x==1)
            t1.push_back(1);
        if(y==1)
            t2.push_back(1);           
        unordered_set<int> output;
        for(int i=0;i<t1.size();i++)
        {
            for(int j=0;j<t2.size();j++)
            {
                int temp = t1[i]+t2[j];
                if(temp<=bound)
                    output.insert(temp);
            }
        }
        vector<int> res;
        for(int i:output)
            res.push_back(i);
        return res;
    }     
};
