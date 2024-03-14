#include <iostream>
#include <cstring>
using namespace std;

const int MAX_N = 1005;
int dp[MAX_N][MAX_N];

int LCS(const string& s1, const string& s2) {
    int n = s1.length();
    int m = s2.length();

    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
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

int main(){
    string s1, s2;
    while(getline(cin,s1) && getline(cin,s2)){
        memset(dp, 0, sizeof(dp));
        cout<<LCS(s1,s2)<<endl;
    }
    return 0;
}

