#include<stdio.h>
#define ll long long int

ll Big_Mod(ll b, ll p, ll m){
    if(p==0) return 1;
    if(p%2==0){
        ll aa=Big_Mod(b,p/2,m);
        return ((aa%m)*(aa%m))%m;
    }
    else{
        return ((b%m)*(Big_Mod(b,p-1,m)))%m;
    }
}
int main(){
    int t; 
    scanf("%d",&t);
    ll x,y,z;
    while(t--){
        scanf("%lld %lld %lld",&x,&y, &z);
        printf("%lld\n",Big_Mod(x,y,z));
    }
    return 0;
}
