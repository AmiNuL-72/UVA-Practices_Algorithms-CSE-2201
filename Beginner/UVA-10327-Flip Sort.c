#include<stdio.h>
int main(){
    int n,i,j;
    while(scanf("%d",&n) != EOF){
        int ar[n];
        for(i=0; i<n; i++){
            scanf("%d",&ar[i]);
        }
        int cnt=0;
        for(i=0; i<n; i++){
            for(j=0; j<n-1; j++){
                if(ar[j]>ar[j+1]){
                    int tmp=ar[j+1];
                    ar[j+1]=ar[j];
                    ar[j]=tmp;
                    cnt++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", cnt);
    }

    return 0;
}
