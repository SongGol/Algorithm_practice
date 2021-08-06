#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string str;
	stack<int> s;
	int a, b;
	
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		if ('0' <= str[i] && str[i] <= '9') {
			s.push(str[i] - '0');
		} else {
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			if (str[i] == '+') {
				s.push(b + a);
			} else if (str[i] == '-') {
				s.push(b - a);
			} else if (str[i] == '*') {
				s.push(b * a);
			} else {
				s.push(b / a);
			}
		}
	}
	cout << s.top();
	return 0;
}
