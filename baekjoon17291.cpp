#include <stdio.h>

//dp[i][k]: i년도에 k년도에 태어난 벌레 수 
int dp[21][21];

int main()
{
	int n;
	scanf("%d", &n);
	
	dp[1][1] = 1;
	for (int i = 2; i <= n; ++i) {
		for (int k = 1; k < i; ++k) {
			if (k % 2 == 1) {
				if (i - k < 3) dp[i][k] += dp[i - 1][k];
			} else if (i - k < 4) {
				dp[i][k] += dp[i - 1][k];
			}
			dp[i][i] += dp[i - 1][k];
		}
	}
	int res = 0;
	for (int i = 1; i <= n; ++i) {
		res += dp[n][i];
	}
	printf("%d", res);
	return 0;
}
