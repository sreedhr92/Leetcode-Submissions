class Solution {
public:
    int check(string binary)
    {
        int count=0;
        for(auto ch:binary)
        {
            if(ch=='0')
                count++;
            if(count==2)
                return 0;
        }
        return 1;
    }
    string maximumBinaryString(string binary) {
        int i;
        while(1)
        {
            for(i=binary.size()-2;i>=0;i--)
            {
                if(check(binary))
                    break;
                if(binary[i]=='1' && binary[i+1]=='0')
                {
                    binary[i]='0';
                    binary[i+1]='1';
                }
            }
            for(i=1;i<binary.size();i++)
            {
                if(check(binary))
                    break;
                if(binary[i]=='0' && binary[i-1]=='0')
                {
                    binary[i-1] = '1';
                    binary[i]='0';
                }
            }
        }
        return binary;
    }
};
