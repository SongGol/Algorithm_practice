#include <bits/stdc++.h>
using namespace std;

enum direct{
	H,
	V,
	D
};

int n;
int home[17][17];
int dp[17][17][3];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			cin >> home[i][k];
		}
	}
	dp[1][2][V] = 1;
	
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n; k++) {
			if (home[i][k] == 0) {
				if (!home[i][k - 1]) { //vertical 
					dp[i][k][V] += dp[i][k - 1][D] + dp[i][k - 1][V];
				}
				if (!home[i - 1][k]) { //horizental
					dp[i][k][H] += dp[i - 1][k][D] + dp[i - 1][k][H];
				}
				if (!home[i - 1][k] && !home[i][k - 1]) { //diag
					dp[i][k][D] += dp[i - 1][k - 1][D] + dp[i - 1][k - 1][H] + dp[i - 1][k - 1][V];
				}
			}
		}
	}
	cout << dp[n][n][D] + dp[n][n][H] + dp[n][n][V];

	return 0;
}
