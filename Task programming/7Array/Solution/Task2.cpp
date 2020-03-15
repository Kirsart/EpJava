#include <stdio.h>

int	main()
{
	int a[1000], n, sum = 0, z = 0;
	double mediales;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	mediales = sum / n;
	for (int i = 0; i < n; i++) if (a[i] < mediales) z++;

	printf("%d", z);

}