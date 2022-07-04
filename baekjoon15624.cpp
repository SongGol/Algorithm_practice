#include <bits/stdc++.h>

#define MAXIMUM 1000000
#define DIV 1000000007
using namespace std;

int n;
long long fibo[MAXIMUM + 1] = {0, 1, 1};
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 3; i <= MAXIMUM; i++) {
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % DIV;
	}
	cout << fibo[n];
	
	return 0;
}
