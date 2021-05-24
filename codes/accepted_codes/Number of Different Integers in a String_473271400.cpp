class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> s;
        string num="";
        for(char ch : word)
        {
            if(isdigit(ch))               
                num+=ch;
            else
            {
                if(!num.size())
                    continue;
                int k=0;
                if(num.size()>1 && num[k]=='0')
                {
                    while(num[k]=='0' && k<num.size())
                        k++;
                    if(k!=num.size())
                        s.insert(num.substr(k,num.size()-k));
                    else
                        s.insert("0");
                }
                else
                    s.insert(num);
                num="";
            }
        }
        cout<<endl;
        if(num.size())
        {
            int k=0;
                if(num.size()>1 && num[k]=='0')
                {
                    while(num[k]=='0' && k<num.size())
                        k++;
                    if(k!=num.size())
                        s.insert(num.substr(k,num.size()-k));
                    else
                        s.insert("0");
                }
                else
                    s.insert(num);
        }
        for(string st:s)
            cout<<st<<"    ";
        return  s.size();
    }
};
