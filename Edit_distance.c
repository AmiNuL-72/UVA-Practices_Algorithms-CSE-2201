#include<stdio.h>

int min(int x, int y){
  if(x<y) return x;
  else return y;
}

char s1[5010],s2[5010];
int n,m,dp[5010][5010];

void build_dp(){
  /*  0 1 2 3
      1
      2
  ------------------------*/
  int i,j;
  for(i=0;i<=n;i++){   
    dp[i][0]=i;
  }
  
  for(j=0;j<=m;j++){  
    dp[0][j]=j;        
  }                  
  /*----------------------------------------
  if (s1[i]==s2[j]) --> same as diagonal
     else -> min(three neibour)+1;  */
  /*----------------------------------------------------------------*/
  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      if(s1[i-1]==s2[j-1]){
        dp[i][j]=dp[i-1][j-1];
      }
      else{
        dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
      }
    }
  }
  /*------------------------------------------------------------------*/
}


int main(){
  while(scanf("%d %s %d %s",&n,s1,&m,s2)==4)
  {
    build_dp();
    printf("%d\n",dp[n][m]);
  }
  return 0;
}
