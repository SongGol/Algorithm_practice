#include <stdio.h>
#include <queue>

#define NUM 100001

using namespace std;

int rock[NUM];
bool check[NUM];

int main()
{
	int n, s, count = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &rock[i]);
	}
	scanf("%d", &s);
	
	queue<int> q;
	q.push(s);
	
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		if (cur < 1 || cur > n) continue;
		if (check[cur] == false) {
			count++;
			check[cur] = true;
			q.push(cur + rock[cur]);
			q.push(cur - rock[cur]);
		}
	}
	
	printf("%d", count);
	return 0;
}
