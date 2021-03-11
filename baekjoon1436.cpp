#include<cstdio>

int disaster(int n)
{
	int num = 666;
	int num_copy = 0;
	int n_count = 0;
	int count = 0;
	
	while(n_count != n)
	{
		count = 0;
		num_copy = num++;
		while (count < 3)
		{
			if (num_copy == 0){
				count = 0;
				num_copy = num++;
			}
			if (num_copy % 10 == 6){
				++count;
			} else {
				count = 0;
			}
			num_copy /= 10;
		}
		++n_count;
	}
	
	return num - 1;
}

//void test(int num)
//{
//	for(int i = 1; i < num; ++i)
//	{
//		if (i % 10 == 0) {
//			printf("%d\n", disaster(i));
//		} else {
//			printf("%d  ", disaster(i));
//		}
//	}
//}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	//test(n);
	printf("%d", disaster(n));
	
	return 0;
}
