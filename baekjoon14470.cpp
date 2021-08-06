#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
	
	int res = 0;
	if (a < 0) res = -a * c + d + b * e;
	else if (a == 0) res = d + b * e;
	else res = (b - a) * e;
	
	printf("%d", res);
	
	return 0;
}
