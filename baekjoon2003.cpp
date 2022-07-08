#include<bits/stdc++.h>
using namespace std;

int n, cnt, i = 1, k = 1;
long long m, sum;
long long A[10001];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> A[i];
	}
	
	while (i <= n) {
		if (sum == m) {
			++cnt;
			sum -= A[i++];
		} else if (sum < m) {
			if (k > n) break;
			sum += A[k++];
		} else {
			sum -= A[i++];
		}
	}
	cout << cnt;
	
	return 0;
}
