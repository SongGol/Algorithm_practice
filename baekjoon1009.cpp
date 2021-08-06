#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector< vector<int> > numbers(10);
	numbers[0] = vector<int>(1,10);
	for(int i = 1; i < 10; ++i)
	{
		vector<int> v;
		v.push_back(i);
		while(true)
		{
			int k = (v[v.size() - 1] * i) % 10;
			if (k == i) break;
			v.push_back(k);
		}
		numbers[i] = v;
	}

	ios_base::sync_with_stdio(false);
	int t, a, b;
	cin >> t;
	for(int i = 0; i < t; ++i)
	{
		cin >> a >> b;
		cout << numbers[a % 10][(b - 1) % numbers[a % 10].size()] << endl;
	}
	
	return 0;
}
