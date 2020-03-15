#include <stdio.h>

int	main()
{
	int n, maxElem = -1000, e, a[1000], minp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &e);
		a[i] = e;
		if (maxElem < a[i])
		{
			maxElem = a[i];
			minp = i;
		}
	}
	printf("%d\n", minp);
	for (int i = 0; i < n; i++)	printf("%d ", a[i]);
}
