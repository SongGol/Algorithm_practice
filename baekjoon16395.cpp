#include <stdio.h>

long long arr[31][31];
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	
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
	
	printf("%lld", arr[n][k]);
	return 0;
}
