#include <stdio.h>

#define MAX_COIN 1000000

using namespace std;

int coins[100];
int dp[10001];

int main()
{
	int n, k, tmp;
	scanf("%d %d", &n, &k);
	
	for (int i = 0; i < n; ++i) {
		scanf("%d", coins + i);
	}
	//최댓값으로 초기화 
	for (int i = 0; i <= 10001; ++i) {
		dp[i] = MAX_COIN;
	}
	
	for (int i = 1; i <= k; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i < coins[j]) {
				continue;
			} else if (i == coins[j]) {
				dp[i] = 1;
			} else {
				if (dp[i] > dp[i - coins[j]] + 1) dp[i] = dp[i - coins[j]] + 1;
			}
		}
	}
	printf("%d", dp[k] == MAX_COIN ? -1 : dp[k]);
	
	return 0;
}
