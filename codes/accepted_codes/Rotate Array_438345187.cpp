class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int i,j=0;
        int n=nums.size();
        if(n<=k)
            k=k%n;
       int a[n];
        for(i=n-k;i<n;i++)
            a[j++]=nums[i];
            for(i=0;i<n-k;i++)
                a[j++]=nums[i];
        for(i=0;i<n;i++)
            nums[i]=a[i];     
    }
};
