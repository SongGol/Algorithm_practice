#include <stdio.h>

#define NUM 1001

bool check[NUM][NUM];
int value[NUM][NUM];

int xx[] = {-1, 0, 1, 0};
int yy[] = {0, 1, 0, -1};

void recursive(int x, int y, int m, int n)
{
	if (x < 1 || x > n || y < 1 || y > m) return;
	if (value[y][x] == 0 && check[y][x] == false) {
		check[y][x] = true;
		for (int i = 0; i < 4; ++i) {
			recursive(x + xx[i], y + yy[i], m, n);
		}
	} 
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	
	for (int i = 1; i <= m; ++i) {
		for (int k = 1; k <= n; ++k) {
			scanf("%1d", &value[i][k]);
		}
	}
	
	for (int i = 1; i <= n; ++i) {
		recursive(i, 1, m, n);
	}
	
	for (int i = 1; i <= n; ++i) {
		if (check[m][i]) {
			printf("YES");
			return 0;
		}
	}
	
	printf("NO");
	return 0;
}
