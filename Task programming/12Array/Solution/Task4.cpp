#include <stdio.h>

int findLocationOfMin(int a[], int n)
{
	int k;
	int minValue = 30000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < minValue)
		{
			minValue = a[i];
			k = i;
		}
	}
	return k;
}



int	main()
{
	int  a[1000],b[1000], n, e, c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	for (int i = 0; i < n; i++)
	{
		c = findLocationOfMin(a, n);
		b[i] = a[c];
		a[c] = 30000;
		
	}
	printf("%d", b[0]);
	for (int i = 1; i < n; i++) printf(" %d", b[i]);
}