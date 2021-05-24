class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i=0;
        priority_queue<int> pq;
        for(;i<heights.size()-1;++i)
        {
            int gap = heights[i+1]-heights[i];
            if(gap<=0)
                continue;
            bricks-=gap;
            pq.push(gap);
            if(bricks<0)
            {
                if(ladders==0)
                    break;
                bricks+=pq.top();
                pq.pop();
                ladders--;
            }        
        }
        return i;
        
            
        
    }
};
