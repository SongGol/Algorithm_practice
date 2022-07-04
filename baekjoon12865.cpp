#include <bits/stdc++.h>

#define MAXIMUM 100001
using namespace std;

int n, k, res;
int dp[101][MAXIMUM];
int v[MAXIMUM];
int w[MAXIMUM];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j >= w[i]) {
				dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
			res = max(res, dp[i][j]);
		}
	}
	cout << res;
	
	return 0;
}
