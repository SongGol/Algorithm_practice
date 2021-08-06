#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, tmp;
	queue<int> q;
	
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		q.push(i);
	}
	
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
		tmp = q.front();
		q.pop();
		q.push(tmp);
	}
}
