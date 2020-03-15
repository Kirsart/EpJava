#include <stdio.h>

int	main()
{
	int n, e, a[1000], b[1000], c[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &e);
		a[i] = e;
	}
	for (int i = 0, j = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			b[j] = a[i];
			printf("%d ", b[j]);
			j++;
		}		
	}
	printf("\n");

	for (int i = 0, j = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			c[j] = a[i];
			printf("%d ", c[j]);
			j++;
		}
	}
	printf("\n");

	for (int i = 0; i < n; i++)	printf("%d ", a[i]);
}
