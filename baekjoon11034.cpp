#include <stdio.h>

int getJumpCount(int a, int b, int c)
{
	if (b - a == 1 && c - b == 1) {
		return 0;
	} else if (b - a > c - b) {
		return 1 + getJumpCount(a, a + 1, b);
	} else {
		return 1 + getJumpCount(b, b + 1, c);
	}
}

int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) == 3) {
		printf("%d\n", getJumpCount(a, b, c));
	}
	return 0;
}
