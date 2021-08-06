#include <stdio.h>

#define NUM 51

int a[NUM];
int b[NUM];

int main()
{
	int n, m, res = 0, b_point = 1;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", a + i);
	}
	for (int i = 1; i <= m; ++i) {
		scanf("%d", b + i);
	}
	
	for (int i = 1; i <= n; ++i) {
		if (b_point == m + 1) {
			res += a[i];
			continue;
		}
		if (a[i] == b[b_point]) {
			b_point++;
		} else if (a[i] < b[b_point]) {
			res += a[i];
		} else {
			a[i] -= b[b_point++];
			i -= 1;
		}
	}
	printf("%d", res);
	return 0;
}
