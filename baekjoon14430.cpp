#include <stdio.h>

#define MAX(a, b) ((a)>(b)?(a):(b))
#define NUM 301

//dp[i][k]: i, k까지 왔을 때의 수집할 수 있는 최대 광석의 개수 
int dp[NUM][NUM];

int main()
{
	int n, m, tmp;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		for (int k = 1; k <= m; ++k) {
			scanf("%d", &tmp);
			dp[i][k] = MAX(dp[i - 1][k], dp[i][k - 1]) + tmp;
		}
	}
	printf("%d", dp[n][m]);
	
	return 0;
}
