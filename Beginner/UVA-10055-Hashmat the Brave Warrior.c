#include<stdio.h>
int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b) != EOF){
        long long int dif;
        if(b>=a) dif=b-a;
        else dif=a-b;
        printf("%lld\n",dif);
    }
    return 0;
}
