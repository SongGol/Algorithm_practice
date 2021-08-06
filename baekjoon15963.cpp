#include <stdio.h>

int main()
{
	long long n, m;
	scanf("%lld %lld", &n, &m);
	if (n == m) {
		printf("1");
	} else {
		printf("0");
	}
	return 0;
}
