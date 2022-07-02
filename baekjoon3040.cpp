#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int hats[9];
	int sum = 0;
	for (int i = 0; i < 9; ++i) {
		cin >> hats[i];
		sum += hats[i];
	}
	
	for (int i = 0; i < 8; ++i) {
		for (int k = i+1; k < 9; ++k) {
			if (sum - hats[i] - hats[k] == 100) {
				hats[i] = hats[k] = -1;
				goto out;
			}
		}
	}
out:
	for (int i = 0; i < 9; ++i) {
		if (hats[i] != -1) {
			printf("%d\n", hats[i]);
		}
	}
	
	
	return 0;
}
