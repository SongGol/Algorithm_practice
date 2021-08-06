#include <stdio.h>

int arr[100];
char answer[100];

int main()
{
	int k, n, s = 0, time = 0;
	scanf("%d\n%d", &k, &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d %c", &arr[i], &answer[i]);
	}
	
	while (true) {
		time += arr[s];
		if (time >= 210) break;
		if (answer[s] == 'T') {
			k++;
			if (k == 9) k = 1;
		}
		s = (s + 1) % n;
	}
	printf("%d", k);
	return 0;
}
