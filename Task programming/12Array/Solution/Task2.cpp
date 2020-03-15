#include <stdio.h>
int sum_arrpl(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)	if (arr[i] > 0) sum += arr[i];
	return sum;
}
int sum_arrot(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)	if (arr[i] < 0) sum += arr[i];
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
	printf("%d %d", sum_arrpl(a, n), sum_arrot(a, n));
}