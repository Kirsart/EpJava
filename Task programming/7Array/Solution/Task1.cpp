#include <stdio.h>

int	main()
{
	int a[1000], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)	scanf("%d", &a[i]);
	printf("%d", a[0] + a[n - 1]);
	int s = n - 1;
	for (int i = 1; i < n/2; i++)
	{
		s -= 1;
		printf(" %d", a[i] + a[s]);
	}
}
