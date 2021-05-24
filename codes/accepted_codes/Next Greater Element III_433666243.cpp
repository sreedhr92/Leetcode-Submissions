class Solution {
public:
    int make_number(deque<int> &a)
    {
        stringstream ss;
        for(int i:a)
            ss<<i;
        long result ;
        ss >> result;
        cout<<result;
        if(result>2147483648)
            return -1;            
        return (int)result;
    }
    int nextGreaterElement(int n) {
        deque<int> a;
        int i=0;
        while(n!=0)
        {
           // a[i++] = n%10;
            a.push_front(n%10);
            //cout<<n%10<<endl;
            n/=10;
            
           // a[i++] = n%10;
        }
        if(next_permutation(a.begin(),a.end()))
           return make_number(a);
        else
           return -1;
    }
};
