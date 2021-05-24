class Solution {

public:

    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int> q;

        for(auto num: nums)

            q.push(num);

        

        while(k > 1){

            q.pop();

            k--;

        }

        

        return q.top();

    }

};
        


