class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int j =1;
        int miss =0;
        for(int i=0;i<arr.size();i++)
        {
            if(j!=arr[i]){
            while(1)
            {
                miss = j;
                count++;
                cout<<" miss = "<<miss<<" count =  "<<count<<" arr = "<<arr[i]<<endl;
                if(count==k)
                {
                    return miss;
                }
                j++;
                if(j==arr[i])
                    break;
            }}
            j++;
            
        }
        cout<<count;
        if(count!=k)
            return arr[arr.size()-1]+k-count;
        return miss;
        
    }
};
