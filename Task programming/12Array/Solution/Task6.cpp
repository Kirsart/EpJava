#include <stdio.h>

int findLocationOfMin2(int a[], int n, int k)
{
	int minValue = 100000;
	int minPosition = 0;
	for (k; k < n; k++)
	{
		if (a[k] < minValue)
		{
			minValue = a[k];
			minPosition = k;
		}
	}
	return minPosition;
}



int	main()
{
	int  a[1000], n, c, e;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{
		e = findLocationOfMin2(a, n, i);
		c = a[i];
		a[i] = a[e];
		a[e] = c;
	}
	

	printf("%d", a[0]);
	for (int j = 1; j < n; j++)printf(" %d", a[j]);

}