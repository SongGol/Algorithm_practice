#include <stdio.h>

#define MOD 1234567

//dp[i]: 숫자가 i로 끝나는 비밀번호의 수
//dp[n][0] = dp[n - 1][7]
//res = sum(dp[0]~dp[9]) 
int dp[1001][10];

int sum(int t)
{
	return (dp[t][0]+dp[t][1]+dp[t][2]+dp[t][3]+dp[t][4]+
			dp[t][5]+dp[t][6]+dp[t][7]+dp[t][8]+dp[t][9]) % MOD;
}
int main()
{
	int n, t;
	scanf("%d", &n);
	
	for (int i = 0; i < 10; ++i) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= 1000; ++i) {
		dp[i][0] = (dp[i - 1][7]) % MOD;
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][4]) % MOD;
		dp[i][2] = (dp[i - 1][1] + dp[i - 1][3] + dp[i - 1][5]) % MOD;
		dp[i][3] = (dp[i - 1][2] + dp[i - 1][6]) % MOD;
		dp[i][4] = (dp[i - 1][1] + dp[i - 1][5] + dp[i - 1][7]) % MOD;
		dp[i][5] = (dp[i - 1][2] + dp[i - 1][4] + dp[i - 1][6] + dp[i - 1][8]) % MOD;
		dp[i][6] = (dp[i - 1][3] + dp[i - 1][5] + dp[i - 1][9]) % MOD;
		dp[i][7] = (dp[i - 1][4] + dp[i - 1][8] + dp[i - 1][0]) % MOD;
		dp[i][8] = (dp[i - 1][5] + dp[i - 1][7] + dp[i - 1][9]) % MOD;
		dp[i][9] = (dp[i - 1][6] + dp[i - 1][8]) % MOD;
	}
	
	for (int i = 0; i < n; ++i) {
		scanf("%d", &t);
		printf("%d\n", sum(t));
	}
	return 0;
}
