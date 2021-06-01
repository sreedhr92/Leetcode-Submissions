class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i=0;
        int m=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            int cur = arr[i];
            arr[i] = m;
            m = max(cur,m);
        }
        return arr;
    }
};