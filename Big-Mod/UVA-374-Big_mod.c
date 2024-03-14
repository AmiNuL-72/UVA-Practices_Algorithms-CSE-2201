#include<stdio.h>
#define ll long long int

ll Big_Mod(ll b, ll p, ll m){
    if(p==0) return 1;
    if(p%2==0){
        ll x=Big_Mod(b,p/2,m);
        return ((x%m)*(x%m))%m;
    }
    else{
        return ((b%m)*(Big_Mod(b,p-1,m)))%m;
    }
}
int main(){
    ll base,pow,mod;
    while(scanf("%lld %lld %lld", &base, &pow, &mod) != EOF){
        printf("%lld\n",Big_Mod(base,pow,mod));
    }
    return 0;
}
