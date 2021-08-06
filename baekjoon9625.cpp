#include <stdio.h>

enum {
	A,
	B
};

int dp[46][2];
int main()
{
	int k;
	scanf("%d", &k);
	
	dp[1][A] = 0;
	dp[1][B] = 1;
	for (int i = 2; i <= k; ++i) {
		dp[i][A] = dp[i - 1][B];
		dp[i][B] = dp[i - 1][A] + dp[i - 1][B];
	}
	printf("%d %d", dp[k][A], dp[k][B]);
	return 0;
}
