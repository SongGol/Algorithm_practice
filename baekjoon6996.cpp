#include <iostream>
#include <string>
#include <string.h>

using namespace std;
int arr1[26], arr2[26];

bool isAnagrams(const string& a, const string& b) {
	if (a.length() != b.length()) {
		return false;
	}
	memset(arr1, 0, sizeof(arr1));
	memset(arr2, 0, sizeof(arr2));
	for (int i = 0; i < a.length(); ++i) {
		arr1[a[i] - 'a'] += 1;
		arr2[b[i] - 'a'] += 1;
	}
	for (int i = 0; i < b.length(); ++i) {
		if (arr1[i] != arr2[i]) {
			return false;
		}
	}
	return true;
}

int main()
{
	int t;
	string s1, s2;
	
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		cin >> s1 >> s2;
		if (!isAnagrams(s1, s2)) {
			cout << s1 << " & " << s2 << " are NOT anagrams.\n";
		} else {
			cout << s1 << " & " << s2 << " are anagrams.\n";
		}
		
	}
	return 0;
}
