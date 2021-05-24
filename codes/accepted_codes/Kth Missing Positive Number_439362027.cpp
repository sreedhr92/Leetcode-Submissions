class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int j =1;
        int miss =0;
        for(int i=0;i<arr.size();i++)
        {
            if(j!=arr[i])
            {
                while(1)
                {
                    miss = j;
                    count++;
                    if(count==k)
                        return miss;
                    j++;
                    if(j==arr[i])
                        break;
                }
            }
            j++;
            
        }
        if(count!=k)
            return arr[arr.size()-1]+k-count;
        return 0;
        
    }
};
