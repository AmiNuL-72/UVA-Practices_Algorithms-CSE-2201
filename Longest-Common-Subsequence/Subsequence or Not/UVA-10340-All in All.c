#include<stdio.h>
#include<string.h> 

int main(){
    char s[100005], t[100005]; 
    while(scanf("%s %s", s, t) != EOF){ 
        int n=strlen(s);
        int m=strlen(t);
        int i,j,cnt=0,x=0;
      
        /*....Subsequence or not..!!
        ---------------------------------*/
        for(i=0; i<n; i++){
            for(j=x; j<m; j++){
                if(s[i]==t[j]){
                    cnt++;
                    x=j+1;
                    break;
                }
            }
        }
        /*-------------------------------*/
        if(cnt==n){
            printf("Yes\n");
        }
        else printf("No\n");
    }

    return 0;
}
