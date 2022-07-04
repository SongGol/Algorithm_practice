#include <bits/stdc++.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
using namespace std;

string a, b;
int dp[1001][1001];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> a >> b;
	for (int i = 1; i <= a.length(); i++) {
		for (int k = 1; k <= b.length(); k++) {
			if (a[i - 1] == b[k - 1]) {
				dp[i][k] = dp[i - 1][k - 1] + 1;
			} else {
				dp[i][k] = MAX(dp[i - 1][k], dp[i][k - 1]);
			}
		}
	}
	cout << dp[a.length()][b.length()];
	
	return 0;
}
