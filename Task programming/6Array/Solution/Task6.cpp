#include <stdio.h>

int	main()
{
	int  c[1000000000], n, m, e, z, s;
	scanf("%d %d", &n, &m);
	s = n + m;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &e);
		c[i] = e;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &e);
		c[i + n] = e;
	}
	
	for (int i = 0; i < (s - 1); i++)
	{
		for (int j = 0; j < (s - i - 1); j++)
		{
			if (c[j] > c[j + 1])
			{
				z = c[j];
				c[j] = c[j + 1];
				c[j + 1] = z;
			}
		}
	}
	for (int i = 0; i < s; i++) printf("%d ", c[i]);
}
