#include <stdio.h>

#define NUM 1001

//dp[i]: i번 칸까지 뛰어서 왔을 때 점프한 수 
int dp[NUM];
int arr[NUM];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", arr + i);
		dp[i] = -1;
	}
	
	dp[1] = 0;
	for (int i = 1; i <= n; ++i) {
		if (dp[i] == -1) break;
		for (int k = 1; k <= arr[i]; ++k) {
			if (i + k <= n) {
				if (dp[i + k] == -1) {
					dp[i + k] = dp[i] + 1;
				} else if (dp[i] + 1 < dp[i + k]) {
					dp[i + k] = dp[i] + 1;
				}
			} else {
				break;
			}
		}
	}
	
	printf("%d", dp[n]);
	
	return 0;
}
