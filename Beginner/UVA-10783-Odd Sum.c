#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int i,j;
    for(i=1; i<=t; i++){
        int a,b,sum=0;
        scanf("%d %d",&a,&b);
        for(j=a; j<=b; j++){
            if(j%2) sum+=j;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
