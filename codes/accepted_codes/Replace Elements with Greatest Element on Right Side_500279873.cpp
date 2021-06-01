class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i=0;
        for(int i=0;i<arr.size();i++)
        {
            int m = 0;
            int index = 0;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]>m)
                {
                    m=arr[j];
                    index=j;
                }
            }
            if(index!=0)
            {
                for(;i<index;i++)
                    arr[i]=m;
                i--;
            }
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};