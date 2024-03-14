#include<stdio.h>

int dp[205];

int main(){
    dp[0]=0; int ck=1,i;
    for(i=1; i<205; i++){
        if(ck==1){
            dp[i]=dp[i-1]+1;
            ck=2;
        }
        else{
            dp[i]=dp[i-1]+2;
            ck=1;
        }
    }
    
    int n;
    while(scanf("%d",&n) != EOF){
        printf("%d\n", dp[n]);
    }
    return 0;
}
