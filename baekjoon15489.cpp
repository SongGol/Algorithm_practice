#include <stdio.h>

long long arr[31][31];
int main()
{
	int r, c, w;
	scanf("%d %d %d", &r, &c, &w);
	
	arr[1][1] = 1;
	for (int i = 1; i <= 30; ++i) {
		for (int k = 1; k <= i; ++k) {
			if (k == 1 || k == i) {
				arr[i][k] = 1;
			} else {
				arr[i][k] = arr[i - 1][k - 1] + arr[i - 1][k];
			}
		}
	}
	
	long long res = 0;
	for (int i = 0; i < w; ++i) {
		for (int k = 0; k <= i; ++k) {
			res += arr[r + i][c + k];
		}
	}
	printf("%lld", res);
	return 0;
}
