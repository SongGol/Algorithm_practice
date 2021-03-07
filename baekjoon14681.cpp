#include<cstdio>

int main()
{
	int x, y, r;
	scanf("%d\n%d", &x, &y);
	if (x > 0) {
		if (y > 0) {
			r = 1;
		}
		else {
			r = 4;
		}
	}
	else {
		if (y > 0) {
			r = 2;
		}
		else {
			r = 3;
		}
	}
	printf("%d", r);
	return 0;
}
