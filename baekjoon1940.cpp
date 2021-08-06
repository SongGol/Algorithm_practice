#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, x, res = 0, left, right;
	scanf("%d\n%d", &n, &x);
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	
	sort(arr, arr+n);
	
	left = 0;
	right = n - 1;
	while (left < right) {
		if (arr[left] + arr[right] == x) {
			res++;
			left++;
			right--;
		} else if (arr[left] + arr[right] < x) {
			left++;
		} else {
			right--;
		}
	}
	printf("%d", res);
	
	delete arr;
	
	return 0;
}
