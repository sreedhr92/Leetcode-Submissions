class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()<b.size())
        {
            int diff = b.size()-a.size();
            while(diff)
            {
                a = "0"+a;
                diff--;
            }
        }
        else if(a.size()>b.size())
        {
            int diff = a.size()-b.size();
            while(diff)
            {
                b = "0"+b;
                diff--;
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
        char carry='0';
        for(int i=a.size()-1;i>=0;--i)
        {
            if(a[i]=='0' && b[i]=='0' && carry=='0')
            {
                a[i]='0';
                carry='0';
            }
            else if( (a[i]=='0' && b[i]=='0' && carry=='1') || (a[i]=='0' && b[i]
                =='1' && carry=='0') || (a[i]=='1' && b[i]=='0' && carry=='0'))
            {
                a[i]='1';
                carry='0';
            }   
            else if((a[i]=='0' && b[i]=='1' && carry=='1') || (a[i]=='1' && b[i]=='0' 
                && carry=='1') ||  (a[i]=='1' && b[i]=='1' && carry=='0'))
            {
                a[i]='0';
                carry='1';
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='1')
            {
                a[i]='1';
                carry='1';   
            }
        }
        if(carry=='1')
            return "1"+a;
        return a;
    }
};
