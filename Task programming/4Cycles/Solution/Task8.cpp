#include <stdio.h>

int	main()
{
	int n, k, i = 1, j = 1, g ;
	scanf("%d", &n);
	printf("%d", i);
	do
	{
		i++;
		k = n / i;
		if (k * i == n)printf(" %d", i);		
	} while (n >= i);
	printf("\n");
	g = n;
	printf("%d", g);
	do
		{
			j++;
			g = n / j;
			if (g * j == n)printf(" %d", g);
	} while (n >= j);
}
