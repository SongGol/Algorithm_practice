#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%lld", (long long)MAX(a*b/c, a/b*c));
	return 0;
}
