#define ll long long
#define MOD 1000000007
class Solution {
public:
    ll power(ll x,ll y){
        if(y==0)
            return 1;
        if(y%2==0){
            ll z=power(2,y/2) % MOD;
            z*=z;
            return z%MOD;
        }
        else{
            ll z=power(2,y-1) % MOD;
            z*=x;
            return z%MOD;
        }
        return 1;
    }
    int concatenatedBinary(int n) {
        ll ans=0;
        ll ptn=0;
        for(ll i=n;i>0;--i){
            ll x=31;
            while(i<pow(2,x))
                --x;
            ++x;
            ptn%=(MOD-1);
            ll m=power(2,ptn);
            ll n=(m*i)%MOD;
            ans = ans + n;
            ans=ans%MOD;
            ptn+=x;
        }
        return ans;
    }
};
