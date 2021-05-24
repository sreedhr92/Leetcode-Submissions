class Solution {
public:
    string decodeAtIndex(string S, int K) {
        string temp;
        int i=0,j=0,n=S.size();
        string output;
        while(1)
        {
            //cout<<"Temp = "<<temp<<" char = "<<S[i]<<endl;
            if(j>=K)
            {
                cout<<temp<<" "<<j;
                output+=temp[K-1];
                break;
            }
            if(isdigit(S[i]))
            {
                int val = S[i] - '1';
                int t = temp.size();
                string temp1 = temp;
                while(val!=0)
                {
                    j+=t;
                    temp+=temp1;
                    val--;
                    if(j>=K)
                        break;
                }
                i++;
            }
            else
            {
                temp+=S[i];
                i++;
                j++;
            }
        }
        //cout<<temp;
        return output;
        
    }
};
