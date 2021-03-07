#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

char* bigNumber(string A, string B)
{
	char* result = new char[10002];
	int min_index = A.size() < B.size() ? A.size() : B.size();
	int max_index = A.size() > B.size() ? A.size() : B.size();
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	
	int upper = 0;
	int sum, i;
	for(i = 0; i < min_index; ++i)
	{
		sum = A[i] - '0' + B[i] - '0';
		result[i] = (sum + upper) % 10 + '0';
		upper = (sum + upper) / 10;
	}
	if(A.size() > B.size())
	{
		for(i = min_index; i < max_index; ++i)
		{
			sum = A[i] - '0';
			result[i] = (sum + upper) % 10 + '0';
			upper = (sum + upper) / 10;
		}
	} else {
		for(i = min_index; i < max_index; ++i)
		{
			sum = B[i] - '0';
			result[i] = (sum + upper) % 10 + '0';
			upper = (sum + upper) / 10;
		}
	}
	if (upper == 1)
	{
		result[i] = '1';
		result[i + 1] = '\0';
		reverse(&result[0], &result[i + 1]);
	}else{
		result[i] = '\0';
		reverse(&result[0], &result[i]);
	}
	
	return result;
}

//void test()
//{
//	for(int i = 0; i < 20; ++i)
//	{
//		for(int k = 0; k < 100; ++k)
//		{
//			char* result;
//			result = bigNumber(to_string(i), to_string(k));
//			cout << "A: " << i << ", B: " << k << ", result: " << result << ", expected: " << i + k << endl;
//			delete result;
//		}
//	}
//}

int main()
{
	string A, B;
	char* result;
//	test();
	
	cin >> A >> B;
	result = bigNumber(A, B);
	cout << result;
	delete result;
	
	return 0;
}
