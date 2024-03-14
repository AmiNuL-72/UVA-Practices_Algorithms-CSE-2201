#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int ans;
        if((x>y && x<z) || (x<y && x>z)) ans=x;
        else if((y>x && y<z) || (y<x && y>z)) ans=y;
        else ans=z;

        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
