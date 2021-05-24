class Solution {
public:
    bool check(vector<int> &perm,vector<int> &temp)
    {
        for(int i=0;i<perm.size();i++)
        {
            if(temp[i]!=perm[i])
                return false;
        }
        return true;
    }
    vector<int> operation(vector<int> &arr,vector<int> &perm,int &n)
    {
        for(int i=0;i<arr.size();i++)
        {
            if(i%2)
                arr[i] = perm[n / 2 + (i - 1) / 2];
            else
                arr[i] = perm[i / 2];
        }
        perm=arr;
        return arr;
    }
    int reinitializePermutation(int n) {
        vector<int> perm(n),temp;
        for(int i=0;i<perm.size();i++)
            perm[i]=i;
        temp=perm;
        int output=1;
        vector<int> arr=perm;
        arr=operation(arr,perm,n);
        if(check(perm,temp))
            return output;
        while(1)
        {
            output++;
            arr=operation(arr,perm,n);
            if(check(perm,temp))
                break;
        }
        return output;
    }
};
