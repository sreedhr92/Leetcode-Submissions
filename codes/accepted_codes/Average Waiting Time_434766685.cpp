class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int cur_time;
        //int average;
        //int complete;
        double wait = 0;
        for(int i=0;i<customers.size();i++)
        {
           if(i==0)
           {
               wait = customers[0][1];
               cur_time = customers[0][1]+customers[0][0];
           }
           else
           {
               if(customers[i][0]>cur_time)
                   cur_time = customers[i][0];
               cur_time = cur_time + customers[i][1];
               wait+=cur_time - customers[i][0];
           }
            cout<<wait<<endl;
        }
        return wait/customers.size();
    }
};
