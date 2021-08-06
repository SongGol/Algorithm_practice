#include <stdio.h>

int main()
{
	int n, h, cur_count = 0, max_count = 0, cur_h = 0;
	scanf("%d", &n);
	scanf("%d", &cur_h);
	for (int i = 1; i < n; ++i) {
		scanf("%d", &h);
		if (cur_h > h) {
			cur_count++;
		} else {
			cur_h = h;
			cur_count = 0;
		}
		if (cur_count > max_count) {
			max_count = cur_count;
		}
	}
	printf("%d", max_count);
	return 0;
}
