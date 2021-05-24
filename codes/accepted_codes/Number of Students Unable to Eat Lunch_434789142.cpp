class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count =0;
        int i=0,j=0;
        while(1)
        {
            if(students.size()==0)
                break;
            if(count>students.size()*100)
                break;
            if(students[0]==sandwiches[j])
            {
                j++;
                students.erase(students.begin());
            }
            else
            {
                students.push_back(students[0]);
                students.erase(students.begin());
                count++;
            }
                
            
        }
        return students.size();
        
    }
};
