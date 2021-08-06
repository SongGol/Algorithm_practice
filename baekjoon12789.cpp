#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	queue<int> q;
	stack<int> s;
	
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		q.push(tmp);
	}
	
	int count = 1;
	while(!q.empty() || !s.empty()) {
		if (!s.empty() && !q.empty()) {
			if (s.top() == count) {
				s.pop();
				count++;
			} else if (q.front() == count) {
				q.pop();
				count++;
			} else {
				tmp = q.front();
				q.pop();
				s.push(tmp);
			}
		} else if (!q.empty()) {
			tmp = q.front();
			q.pop();
			if (tmp == count) {
				count++;
			} else {
				s.push(tmp);
			}
		} else if (!s.empty()) {
			tmp = s.top();
			s.pop();
			if (tmp == count) {
				count++;
			} else {
				cout << "Sad";
				return 0;
			}
		}
	}
	cout << "Nice";
	return 0;
}
