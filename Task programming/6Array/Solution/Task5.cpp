#include <stdio.h>

int	main()
{
	int n, minElem = 1001, e, a[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &e);
		a[i] = e;
		if(a[i] > 0) if (minElem > a[i]) minElem = a[i];
	}
	if (minElem < 1001)printf("%d\n", minElem);
	else printf("0\n");
	for (int i = 0; i < n; i++)	printf("%d ", a[i]);
}
