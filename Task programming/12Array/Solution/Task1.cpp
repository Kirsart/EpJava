#include <stdio.h>
int sum_arr(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0) sum += arr[i];
	}
	return sum;
}



int main()
{
	int a[1000], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d", sum_arr(a, n));
}