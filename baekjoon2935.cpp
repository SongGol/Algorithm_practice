#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b, c;
	cin >> a >> c >> b;
	
	string& longer = a.length() > b.length() ? a : b;
	string& shorter = a.length() < b.length() ? a : b;
	if (c == "*") {
		cout << longer;
		for (int i = 0; i < shorter.length() - 1; ++i) {
			cout << 0;
		}
	} else if (a.length() == b.length()) {
		cout << 2;
		for (int i = 0; i < shorter.length() - 1; ++i) {
			cout << 0;
		}
	} else {
		for (int i = 0; i < longer.length(); ++i) {
			if (i == longer.length() - shorter.length()) {
				cout << 1;
			} else {
				cout << longer[i];
			}
		}
	}
	return 0;
}
