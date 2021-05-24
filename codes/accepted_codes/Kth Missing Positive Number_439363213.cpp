class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int j =1;
        for(int i=0;i<arr.size();i++)
        {
            while(j!=arr[i])
            {
                count++;
                if(count==k)
                    return j;
                j++;
            }
            j++;
            
        }
        if(count!=k)
            return arr[arr.size()-1]+k-count;
        return 0;
        
    }
};
