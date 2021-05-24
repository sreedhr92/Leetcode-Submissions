class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int time=1;
        while(1)
        {
            if(memory1-time<0 && memory2-time<0)
                return {time,memory1,memory2};
            if(memory1>=memory2 && memory1-time>=0)
                memory1-=time;
            else if(memory2>memory1 && memory2-time>=0)
                memory2-=time;
            time++;
        }
        return{-1,-1,-1};
    }
};
