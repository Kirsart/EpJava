#include <stdio.h>

int	main()
{
	int n, m, j, s;
	scanf("%d %d", &n, &m);
	if (n % 2 != 0)
	{
		printf("%d", n);
		for (; n < m; )
		{
			n++;
			if (n % 2 != 0) printf(" %d", n);
		}
	}

	else
	{
		for (; n < m-1; n++)
		{
			if (n % 2 != 0) printf("%d ", n);
		}
		if (n % 2 != 0)printf("%d", n);
		if (m % 2 != 0)printf("%d", m);
	}

}
