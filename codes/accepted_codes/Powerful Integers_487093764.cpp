class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        if(bound==0)
            return {};
        int i=0,j=0;
        int temp;
        vector<int> t1,t2;
        if(x!=1){
        do
        {
            temp = pow(x,i);
            t1.push_back(temp);
            i++;
        }while(temp<bound);
        }
        if(y!=1){
        do
        {
            temp = pow(y,j);
            t2.push_back(temp);
            j++;
        }while(temp<bound);
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
