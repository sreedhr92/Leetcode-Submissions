class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max_index = max_element(arr.begin(),arr.end()) - arr.begin();
        int max = arr[max_index];
        const int n = arr.size();
        if(n<3)
            return false;
        if(max_index==0 || max_index==n-1)
            return false;
        int i,prev = -1;
        for(i=0;i<arr.size();++i)
        {
            if(i<=max_index)
            {
                if(prev >=arr[i])
                    return false;
                else
                    prev = arr[i];
            }
            if(i>max_index)
            {
                if(prev<=arr[i])
                    return false;
                else
                    prev  = arr[i];
            }    
                
        }
        return true;
        
    }
};
