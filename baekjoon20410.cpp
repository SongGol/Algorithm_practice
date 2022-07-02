#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int m, seed, x1, x2;
	cin >> m >> seed >> x1 >> x2;
	
	for (int a = 0; a < 100; a++) {
		for (int c = 0; c < 100; c++) {
			if ((a*seed+c)%m == x1 && (a*x1+c)%m == x2) {
				cout << a << " " << c;
				return 0;
			}
		}
	}
	
	return 0;
}
