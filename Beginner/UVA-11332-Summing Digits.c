#include<stdio.h>

int dgSum(int a){
    int s=0;
    while(a>0){
        s+=(a%10);
        a/=10;
    }
    return s;
}

int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        int x=dgSum(n);
        x=dgSum(x);
        x=dgSum(x);

        printf("%d\n",x);
    }
    return 0;
}
