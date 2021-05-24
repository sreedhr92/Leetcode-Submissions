class Solution {
public:
    bool isPossible(vector<int>& target) {
        if(target.size()==1 && target[0]==1)
            return true;
        if(target.size()==1 && target[0]!=1)
            return false;
        int sum=0;
        int output = target.size();
        priority_queue<int> q;
        for(int i:target)
        {
            sum+=i;
            q.push(i);
        }
        while(sum > output)
        {
            int max = q.top();
            q.pop();
            int val = sum -max;
            q.push(max-val);
            sum-=val;
        }
        return sum == output;
        
    }
};
