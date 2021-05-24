class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int len = 0;
        int flag=0;
        for(vector<int> i :pieces)
        {
            if(i.size()==1)
            {
                int val = i[0];
                for(int j=0;j<arr.size();j++)
                {
                    if(val==arr[j])
                        len++;
                }
            }
            else
            {
                int n=i.size();
                int k;
                for(int j=0;j<arr.size();j++)
                {
                    if(i[0]==arr[j])
                    {
                        j++;
                        for(k=1;k<n && j<arr.size();k++,j++)
                        {
                            if(i[k]!=arr[j])
                                break;
                        }
                        if(k==n)
                            len+=n;
                        break;
                    }     
                }
            }
        }
        if(len!=arr.size())
            return false;
        return true;
        
    }
};
