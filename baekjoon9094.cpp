#include <stdio.h>

int main()
{
	int t, n, m;
	
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d %d", &n, &m);
		int count = 0;
		for (int j = 1; j < n - 1; ++j) {
			for (int k = j + 1; k < n; ++k) {
				if ((j*j + k*k + m) % (j*k) == 0) {
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
