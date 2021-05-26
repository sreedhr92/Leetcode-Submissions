class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp = arr;
        int i=0;
        for(int j=0;i<temp.size() and j<temp.size();j++,i++)
        {
            if(temp[j]==0 and j!=temp.size()-1 and i+1 <arr.size())
            {
                arr[i]=0;
                i++;
                arr[i]=0;
            }
            else
                arr[i]=temp[j]; 
                
        }
        
    }
};