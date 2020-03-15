#include <stdio.h>

int	main()
{
	int n, m;
	scanf("%d", &n);
	m = n;
	for (int i = 1; i <= n; i++)
	{
		printf("%d + %d = %d\n", i, m, n + 1);
		m = m - 1;
	}
}