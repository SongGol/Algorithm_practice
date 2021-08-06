#include <stdio.h>

int arr[101][101];

int main()
{
	int a, b, c, d;
	for (int i = 0; i < 4; ++i) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for (int j = a; j < c; ++j) {
			for (int k = b; k < d; ++k) {
				arr[j][k] = 1;
			}
		}
	}
	int res = 0;
	for (int i = 1; i <= 100; ++i) {
		for (int k = 1; k <= 100; ++k) {
			if (arr[i][k] == 1) {
				res++;
			}
		}
	}
	printf("%d", res);
	return 0;
}
