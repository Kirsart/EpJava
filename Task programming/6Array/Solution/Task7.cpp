#include <stdio.h>

int	main()
{
	int  c[1000], n, z;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)	scanf("%d", &c[i]);
	
	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = 0; j < (n - i - 1); j++)
		{
			if (c[j] > c[j + 1])
			{

				z = c[j];
				c[j] = c[j + 1];
				c[j + 1] = z;
			}
		}
	}
	for (int i = 0; i < n; i++) printf("%d ", c[i]);
}


