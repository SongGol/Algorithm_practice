#include <stdio.h>
#include <limits.h>
#include <queue>

#define NUM 51

using namespace std;

int shark[NUM][NUM];
bool check[NUM][NUM];

void initialize(int n, int m)
{
	for (int i = 1; i <= n; ++i) {
		for (int k = 1; k <= m; ++k) {
			check[i][k] = false;
		}
	}
}

void printAll(int n, int m)
{
	for (int i = 1; i <= n; ++i) {
		for (int k = 1; k <= m; ++k) {
			printf("%d ", shark[i][k]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int n, m, tmp;
	int xx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int yy[] = {1, 0, -1, 1, -1, 1, -1, 0};
	queue<pair<int, int> > q;
	
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		for (int k = 1; k <= m; ++k) {
			scanf("%d", &tmp);
			if (tmp == 0) {
				shark[i][k] = INT_MAX;
			} else {
				shark[i][k] = 0;
				q.push(make_pair(i, k));
			}
		}
	}
	
	int size = q.size();
	for (int i = 0; i < size; ++i) {
		initialize(n, m);
		pair<int, int> cur = q.front(); q.pop();
		
		queue<pair<int, int> > s;
		s.push(cur);
		//printf("%d (%d, %d)\n", i + 1, cur.first, cur.second);
		while (!s.empty()) {
			pair<int,int>  now = s.front(); s.pop();
			int x = now.first; int y = now.second;
			
			for (int k = 0; k < 8; ++k) {
				int nextX = x + xx[k];
				int nextY = y + yy[k];
				//printf("nextX: %d, nextY: %d\n", nextX, nextY);
				if (nextX < 1 || nextX > n || nextY < 1 || nextY > m) continue;
				if (check[nextX][nextY] == false) {
					check[nextX][nextY] = true;
					if (shark[x][y] + 1 < shark[nextX][nextY]) shark[nextX][nextY] = shark[x][y] + 1;
					s.push(make_pair(nextX, nextY));
				}
			}
			//printAll(n, m);
		}
		
	}
	
	int res = 0;
	for (int i = 1; i <= n; ++i) {
		for (int k = 1; k <= m; ++k) {
			if (res < shark[i][k]) res = shark[i][k];
		}
	}
	printf("%d", res);
	
	return 0;
}
