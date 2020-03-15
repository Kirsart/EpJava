#include <stdio.h>

int	main()
{
	int n, m, i=0, k, g, max;
	scanf("%d %d", &n, &m);
	do
	{
		i++;
		k = n / i;
		g = m / i;
		if (k * i == n && g * i == m) max = i;
		
	} while (n > i || m > i);
	printf("%d", max);
}	