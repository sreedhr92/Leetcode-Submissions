class Solution {
public:
    int count_vowels(string s)
    {
        int count=0;
        for(auto ch:s)
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch
                =='I'||ch=='O'||ch=='U')
                count++;
        }
        return count;
    }
    bool halvesAreAlike(string s) {
        if(count_vowels(s.substr(0,s.size()/2))==count_vowels(s.substr((s.size()/2),s
            .size())))
            return true;
        else
            return false;
        
        
    }
};
