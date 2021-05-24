class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
        if(target==0)return 0;
        int n=0,aux=0;
        while(target>aux){
            n++;
            aux+=n;
        }
        while(true){
            if((aux-target)%2==0)return n;
            else {
                n++;
                aux+=n;
            }
        }
        return 1;
    }
};
