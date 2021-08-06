#include <stdio.h>

void print_one_location(int n)
{
	int count = 0;
	while (n > 0) {
		if (n % 2 == 1) {
			printf("%d ", count);
		}
		count++;
		n /= 2;
	}
}

int main()
{
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d", &n);
		print_one_location(n);
		printf("\n");
	}
	return 0;
}
