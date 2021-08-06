#include <stdio.h>

#define NUM 250001

//dp[i]: i번 까지 일했을때의 최대 기간 수익 

long long dp[NUM];

int main()
{
	int n, p, res;
	while(1) {
		res = (1 << 31) + 1;
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = 1; i <= n; ++i) {
			scanf("%d", &p);
			if (dp[i - 1] > 0) {
				dp[i] = p + dp[i - 1];
			} else {
				dp[i] = p;
			}
			if (dp[i] > res) res = dp[i];
		}
		printf("%d\n", res);
	}
	return 0;
}
