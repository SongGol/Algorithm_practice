#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	long long tile[82] = {0, 1, 1, 2, 3, 5, 8};
	for (int i = 7; i <= 81; ++i) {
		tile[i] = tile[i - 1] + tile[i - 2];
	}
	printf("%lld", 2 * tile[n] + 2 * tile[n + 1]);
	return 0;
}
