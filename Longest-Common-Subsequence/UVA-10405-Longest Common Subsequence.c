#include <stdio.h>
#include <string.h>

#define MAX_N 1005

int dp[MAX_N][MAX_N];
char s1[MAX_N], s2[MAX_N];

int max(int x, int y){
    if(x>y) return x;
    else return y;
}

int LCS() {
    int n = strlen(s1);
    int m = strlen(s2);
    
    int i,j;
    for(i=0; i<=n; i++){
        for(j=0; j<=m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[n][m];
}

int main() {
    
    while(gets(s1)){
        if(strlen(s1)==0) return 0;        
        gets(s2);
        int i,j;
        for(i=0; i<MAX_N; i++){
            for(j=0; j<MAX_N; j++){
                dp[i][j]=0;
            }
        }
        printf("%d\n", LCS());
    }
    return 0;
}

