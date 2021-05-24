class Solution {
public:
    bool ispal(unsigned long long p)
    {
        string temp = to_string(p);
        int left = 0;
        int right = temp.size()-1;
        while(left<right)
        {
            if(temp[left]!=temp[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    int superpalindromesInRange(string left, string right) {
        int count = 0;
        unsigned long long l = stoull(left) , r = stoull(right),current =1,p,x;
        
        while(true)
        {
            // For odd digits.......
            string c = to_string(current);
            string temp = c;
            reverse(temp.begin(),temp.end());
            p = stoull(c + temp.substr(1,temp.size()-1));
            x = p*p;
            if(x >= l && x <= r && ispal(x))
                count++;
            if(x>r)
                break;
            
            // For even digits........
            p = stoull(c + temp);
            x = p*p;
            if((x >= l && x <= r) && ispal(x))
                count++;
            current ++;
            
        }
        return count;
    }
};
