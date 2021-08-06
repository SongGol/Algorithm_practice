#include <stdio.h>

int gcd(int a, int b)
{
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main()
{
	int a, b, res;
	while(true) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		int res = gcd(a, b);
		if (res == a) {
			printf("factor\n");
		} else if (res == b) {
			printf("multiple\n");
		} else {
			printf("neither\n");
		}
	}
	return 0;
}
