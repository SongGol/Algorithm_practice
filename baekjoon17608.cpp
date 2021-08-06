#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
	int n, h;
	stack<int> s;
	
	scanf("%d", &n);
	scanf("%d", &h);
	s.push(h);
	for (int i = 1; i < n; ++i) {
		scanf("%d", &h);
		if (s.top() > h) {
			s.push(h);
		} else {
			while (!s.empty() && s.top() <= h) {
				s.pop();
			}
			s.push(h);
		}
	}
	printf("%d", s.size());
	return 0;
}
