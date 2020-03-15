#include <stdio.h>

int	main()
{
	int n, minElem = 1000, e, a[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &e);
		a[i] = e;
		if (minElem > e) minElem = e;
	}
	printf("%d\n", minElem);
	for (int i = 0; i < n; i++)	printf("%d ", a[i]);
}
