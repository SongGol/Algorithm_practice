#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

enum {
	A,
	B,
	C
};

int dp[11][3];

int main()
{
	int h, y;
	scanf("%d %d", &h, &y);
	dp[0][A] = dp[0][B] = dp[0][C] = h;
	
	for (int i = 1; i <= 10; ++i) {
		int max_one = MAX(MAX(dp[i - 1][A], dp[i - 1][B]), dp[i - 1][C]);
		dp[i][A] = max_one + max_one * 5 / 100;
		if (i >= 3) {
			int max_three = MAX(MAX(dp[i - 3][A], dp[i - 3][B]), dp[i - 3][C]);
			dp[i][B] = max_three + max_three * 20 / 100;
		} else {
			dp[i][B] = dp[i - 1][B];
		}
		if (i >= 5) {
			int max_five = MAX(MAX(dp[i - 5][A], dp[i - 5][B]), dp[i - 5][C]);
			dp[i][C] = max_five + max_five * 35 / 100;
		} else {
			dp[i][C] = dp[i - i][C];
		}
	}
	
	printf("%d", MAX(MAX(dp[y][A], dp[y][B]), dp[y][C]));
	return 0;
}
