class Solution {
public:
    string originalDigits(string s) {
        int b[10]={0};
        unordered_map<char,int> hash;
        //initialization
        string letters="abcdefghijklmnopqrstuvwxyz";
        for(char ch:letters)
            hash[ch]=0;
        for(char ch:s)
            hash[ch]++;
        string one ="one";
        //string two ="two";//unique
        //string three ="three";//unique
        string four ="four";
        string five ="five";
        //string six="six";//unique
        string seven="seven";
        //string eight="eight";//unique
        string nine="nine";
        //string zero="zero";//unique
        //checking the two ='w'
        b[2]=hash['w'];
        //removing the two
        hash['t']-=b[2];
        hash['w']-=b[2];
        hash['o']-=b[2];
        //checking the six ='x'
        b[6]=hash['x'];
        //removing the six
        hash['s']-=b[6];
        hash['i']-=b[6];
        hash['x']-=b[6];
        //checking the six ='x'
        b[8]=hash['g'];
        //removing the six
        hash['e']-=b[8];
        hash['i']-=b[8];
        hash['g']-=b[8];
        hash['h']-=b[8];
        hash['t']-=b[8];
        //checking the zero ='z'
        b[0]=hash['z'];
        //removing the six
        hash['z']-=b[0];
        hash['e']-=b[0];
        hash['r']-=b[0];
        hash['o']-=b[0];
        //checking whether its a seven='s'
        b[7]=hash['s'];
        hash['s']-=b[7];
        hash['e']-=b[7];
        hash['v']-=b[7];
        hash['e']-=b[7];
        hash['n']-=b[7];
        //checking whether its a five='v'
        b[5]=hash['v'];
        hash['f']-=b[5];
        hash['i']-=b[5];
        hash['v']-=b[5];
        hash['e']-=b[5];
        //checking whether its a nine='i'
        b[9]=hash['i'];
        hash['n']-=b[9];
        hash['i']-=b[9];
        hash['n']-=b[9];
        hash['e']-=b[9];
        //checking whether its a four='f'
        b[4]=hash['f'];
        hash['f']-=b[4];
        hash['o']-=b[4];
        hash['u']-=b[4];
        hash['r']-=b[4];
        //checking whether its a three='h'
        b[3]=hash['h'];
        hash['t']-=b[3];
        hash['h']-=b[3];
        hash['r']-=b[3];
        hash['e']-=b[3];
        hash['e']-=b[3];
        //checking whether its a one='o'
        b[1]=hash['o'];
        hash['o']-=b[1];
        hash['n']-=b[1];
        hash['e']-=b[1];
        string output="";
        for(int i=0;i<10;i++)
        {
            if(b[i]>0)
            {
                while(b[i])
                {
                    output+=char(i+48);
                    b[i]--;
                }
            }
        }
        return output;            
    }
};
