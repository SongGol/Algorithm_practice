#include <stdio.h>
#include <limits.h>

#define MIN(a, b) ((a)<(b)?(a):(b))

//dp[i] = i원을 만드는데 필요한 동전의 수
//dp[i - 2] < dp[i - 5] ? two에 + 1 : five에 +1 
enum {
	TWO,
	FIVE
};

int dp[100001][2] = {{INT_MAX, INT_MAX}, {INT_MAX, INT_MAX}, {1, 0}, {INT_MAX, INT_MAX}, {2, 0}, {0, 1},
					{3, 0}, {1, 1}, {4, 0}, {2, 1}, {0, 2}};

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 11; i <= n; ++i) {
		int t = dp[i - 2][TWO] + dp[i - 2][FIVE];
		int f = dp[i - 5][TWO] + dp[i - 5][FIVE];
		dp[i][TWO] = t < f ? dp[i - 2][TWO] + 1 : dp[i - 5][TWO];
		dp[i][FIVE] = t < f ? dp[i - 2][FIVE] : dp[i - 5][FIVE] + 1;
	}	
	
	if (dp[n][TWO] == INT_MAX || dp[n][FIVE] == INT_MAX) {
		printf("-1");
	} else {
		printf("%d", dp[n][TWO] + dp[n][FIVE]);
	}
	return 0;
}
