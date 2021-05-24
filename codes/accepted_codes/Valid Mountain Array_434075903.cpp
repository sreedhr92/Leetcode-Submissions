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
        int i,prev = arr[0];
        for(i=1;i<arr.size();++i)
        {
            if(i<=max_index && prev>=arr[i])
                return false;
            if(i>max_index && prev<=arr[i])
                return false;
            prev = arr[i];
                
        }
        return true;
        
    }
};
