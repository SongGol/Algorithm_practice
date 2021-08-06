#include <stdio.h>

int main()
{
	int t;
	const int A = 300;
	const int B = 60;
	const int C = 10;
	scanf("%d", &t);
	
	if (t % 10 != 0) {
		printf("-1");
		return 0;
	}
	printf("%d %d %d", t / A, (t % A) / B, ((t % A) % B) / C);
	return 0;
}
