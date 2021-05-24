class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        vector<int>vec(n);
        int k=n-1;
        while(r>=l){
            if(abs(nums[l])<abs(nums[r])){
                vec[k--]=nums[r]*nums[r];
                r--;
            }
            else{
                vec[k--]=nums[l]*nums[l];
                l++;
            }
        }
        return vec;
            
    }
};
