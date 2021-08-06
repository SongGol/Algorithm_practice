#include <stdio.h>
#include <limits.h>
#include <queue>

#define STONE 100001

using namespace std;

int arr[STONE];
bool check[STONE];

int main()
{
	int a, b, n, m;
	scanf("%d %d %d %d", &a, &b, &n, &m);
	int xx[] = {a, b, a, -a, b, -b, 1, -1};

	queue<int> q;
	q.push(n);
	check[n] = true;
	arr[n] = 0;
	
	while(!q.empty()) {
		int cur = q.front(); q.pop();
		if (cur == m) break;
		for (int i = 0; i < 8; ++i) {
			int next = i < 2 ? cur * xx[i] : cur + xx[i];
			if (next < 0 || next >= STONE || check[next]) continue;
			arr[next] = arr[cur] + 1;
			check[next] = true;
			q.push(next);
		}
	}
	
	printf("%d", arr[m]);
	return 0;
}
