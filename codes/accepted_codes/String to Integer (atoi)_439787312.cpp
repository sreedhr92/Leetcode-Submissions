class Solution {
public:
    int myAtoi(string s) {
        long output=0;
        string si="";
        int n=0;
        int sign=0;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i] != ' ')
            {
                if(s[i] =='-')
                {sign = 1;i++;}
                else if(s[i]=='+')
                {sign = 0;i++;}
                else if(!isdigit(s[i]))
                    return 0;
                break;
            }
        }
        while(i<s.size() && s[i]=='0')
            i++;
        while(1)
        {
            if(i<s.size() && s[i]!='.' && isdigit(s[i]))
            {
                si+=s[i];
                n++;
            }   
            else
                break;
            i++;
        }
        cout<<" string = "<<si<<endl;
        if(si.size()==0)
            return 0;
        else if(si.size()>11 && sign)
            return INT_MIN;
        else if(si.size()>11 && !sign)
            return INT_MAX;
        else
            output = stol(si);
        cout<<" output = "<<output<<endl;
        if(sign)
            output*=-1;            
        if(output<INT_MIN)
            return INT_MIN;
        if(output>INT_MAX)
            return INT_MAX;
        return output;
    }
};
