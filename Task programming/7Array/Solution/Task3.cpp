#include <stdio.h>

int	main()
{
	int a[2000], n, k;
	scanf("%d", &n);

	for (int i = 0; i < n * 2; i++) scanf("%d", &a[i]);

	for (int i = 0, j = 0; i < n; i++)
	{
		k = a[j];
		a[j] = a[j + 1];
		a[j + 1] = k;
		j += 2;
	}
	printf("%d", a[0]);
	for (int i = 1; i < n * 2; i++) printf(" %d", a[i]);
}