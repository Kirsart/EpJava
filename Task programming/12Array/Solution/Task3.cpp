#include <stdio.h>

int sum_arr(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)	 sum += arr[i];
	return sum;
}

int main()
{
	int a[100][100], m, n;
	scanf("%d %d",&m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	scanf("%d", &a[i][j]);
	}
	printf("%d", sum_arr(a[0], n));
	for (int j = 1; j < m; j++)printf(" %d", sum_arr(a[j], n));
}