#include <stdio.h>
int	main()
{
	int n, k = 1, m;
	scanf("%d", &n);
	while (k <= n)
	{
		m = k * k;
		printf("%d^2 = %d\n", k, m);
		k++;
	}
}