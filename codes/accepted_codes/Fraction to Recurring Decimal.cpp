class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0)
            return "0";
        string output;
        if((numerator<0 and denominator>0) or (numerator>0 and denominator<0))
            output+= "-";
        long n = labs(numerator);
        long d= labs(denominator);
        long r = n%d;
        output+=to_string(n/d);
        if(!r)
            return output;
        output+='.';
        unordered_map<long,int> hash;
        while(r)
        {
            if(hash.find(r)!=hash.end())
            {
                output.insert(output.begin()+hash[r],'(');
                output+=')';
                break;
            }
            hash[r] = output.size();
            r*=10;
            output+=to_string(r/d);
            r%=d;
        }
        return output;

    }
};