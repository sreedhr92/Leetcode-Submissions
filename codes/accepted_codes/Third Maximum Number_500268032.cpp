class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first=LONG_MIN;
        long second=LONG_MIN;
        long third=LONG_MIN;
        for(int i:nums)
        {
            if(i>first)
            {
                third=second;
                second=first;
                first=i;
            }
            else if(i>second)
            {
                if(i==first)
                    continue;
                third=second;
                second=i;
            }
            else if(i>=third)
            {
                if(i==second)
                    continue;
                third=i;
            }
        }
        return third==LONG_MIN  ? first:third;
    }
};