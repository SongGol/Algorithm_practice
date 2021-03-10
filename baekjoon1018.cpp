#include<cstdio>
#include<cstring>
#include<climits>

char g_board[50][50];

int color_board(int row, int col)
{
	//color not change
	int count1 = 0;
	char color = g_board[row][col];
	for (int i = row; i < row + 8; ++i)
	{
		for (int k = col; k < col + 8; ++k)
		{
			if ((i - row) % 2 == 0) {
				if ((k - col) % 2 == 0) {
					if (g_board[i][k] != color) {
						count1++;
					}
				} else {
					if (g_board[i][k] == color) {
						count1++;
					}
				}
			} else {
				if ((k - col) % 2 == 0) {
					if (g_board[i][k] == color) {
						count1++;
					}
				} else {
					if (g_board[i][k] != color) {
						count1++;
					}
				}
			}
		}
	}
	
	//color change
	int count2 = 0;
	for (int i = row; i < row + 8; ++i)
	{
		for (int k = col; k < col + 8; ++k)
		{
			if ((i - row) % 2 == 0) {
				if ((k - col) % 2 == 0) {
					if (g_board[i][k] == color) {
						count2++;
					}
				} else {
					if (g_board[i][k] != color) {
						count2++;
					}
				}
			} else {
				if ((k - col) % 2 == 0) {
					if (g_board[i][k] != color) {
						count2++;
					}
				} else {
					if (g_board[i][k] == color) {
						count2++;
					}
				}
			}
			
		}
	}
	return count1 > count2 ? count2 : count1;
}

int main()
{
	int n, m, min = INT_MAX;
	scanf("%d %d", &n, &m);

	for(int i = 0; i < n; ++i)
	{
		scanf("%s", &g_board[i]);
	}
	
	for(int i = 0; i <= n - 8; ++i)
	{
		for(int k = 0; k <= m - 8; ++k)
		{
			int count = color_board(i, k);
			if (count < min) {
				min = count;
			}
		}
	}
	printf("%d", min);
	
	return 0;
}
