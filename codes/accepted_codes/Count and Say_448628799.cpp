class Solution {
public:
    string count(string output)
    {
        string out="";
        int count;
        char b ;
        for(int i=0;i<output.size();i++)
        {
            b = output[i];
            count =1;
            while(output[i]==b && i < output.size())
            {
                i++;
                count++;
            }
            i--;
            count--;
            out+=to_string(count)+to_string(b-'0');
        }
        return out;
    }
    string countAndSay(int n) {
        string output ="1";
        for(int i=2;i<=n;i++)
            output = count(output);
        return output;
        
    }
};
