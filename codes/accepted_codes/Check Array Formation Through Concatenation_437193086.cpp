class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int len = 0;
        int flag;
        for(vector<int> i :pieces)
        {
            flag=0;
            if(i.size()==1)
            {
                int val = i[0];
                for(int j=0;j<arr.size();j++)
                {
                    if(val==arr[j])
                    {  
                        flag=1;
                        len++;
                    }   
                }
                if(flag==0)
                    break;
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
                            {   
                                flag=1;
                                break;
                            }    
                        }
                        if(k==n)
                            len+=n;
                        break;
                    }     
                }
                if(flag==1)
                    break;
            }
        }
        if(len!=arr.size())
            return false;
        return true;
        
    }
};
