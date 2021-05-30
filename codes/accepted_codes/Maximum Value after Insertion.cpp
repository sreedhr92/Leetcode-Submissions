class Solution {
public:
    string maxValue(string n, int x) {
        if(n[0]=='-')
        {
            int i=1;
            while(i<n.size() and x>=n[i]-'0')
                i++;
           // cout<<"Stopped Character = "<<n[i]<<"    "<<i<<endl;
            if(i==n.size())
            {
                n+=char(x+'0');
                //cout<<n<<endl;
            }
            else
                n.insert(i,to_string(x));
        }
        else
        {
            int i=0;
            while(i<n.size() and x<=n[i]-'0')
                i++;
            if(i==n.size())
            {
                n+=char(x+'0');
            }
            else
                n.insert(i,to_string(x));
        }
        return n;
    }
};