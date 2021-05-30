class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a =0;
        int b=0;
        int c=0;
        for(char ch:firstWord)
        {
            a = (a*10) + (ch-'a');
        }
        for(char ch:secondWord)
        {
            b = (b*10) + (ch-'a');
        }
        for(char ch:targetWord)
        {
            c = (c*10) + (ch-'a');
        }
        cout<<a<<"   "<<b<<"  "<<c<<endl;
        return a+b==c;
        
    }
};