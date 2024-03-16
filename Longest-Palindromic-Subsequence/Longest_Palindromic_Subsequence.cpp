
#include <algorithm>
#include <cstring> // for memset
#include <iostream>
#include <string>

using namespace std;

int longestPalinSubseq(string S)
{
	string R = S;
	reverse(R.begin(), R.end());
  int sz=S.size();
	int dp[sz+1][sz+1];
    memset(dp, 0, sizeof(dp));

	for (int i=1; i<=sz; i++) {
		for (int j=1; j<=sz; j++) {
			if(S[i-1] == R[j-1])
				dp[i][j] = 1 + dp[i-1][j-1];
			else
				dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
		}
	}
  return dp[sz][sz];
}

int main()
{
	string s = "GEEKSFORGEEKS";
  //string s="agbdba";
	cout << "The length of the LPS is : "
		<< longestPalinSubseq(s) << endl;

	return 0;
}

