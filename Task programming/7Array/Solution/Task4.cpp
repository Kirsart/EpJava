#include <stdio.h>

int	main()
{
	int a[10], n, k, z, s = 0;
	scanf("%d", &n);
	scanf("%d", &z);

	for (int i = 0; i < n; i++)
	{
		a[i] = z % 10;
		if (a[i] == 0) s++;
		if (z < 10) a[i + 1] = z/10;
		else z /= 10;
		
	}
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < (n - i); j++)
		{
			
			if (a[j] < a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
	for (int i = 0; i < n; i++)printf("%d", a[i]);
	printf("\n");
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < (n - i - 1); j++)
		{
			if (a[j] > a[j + 1])
			{
					k = a[j];
					a[j] = a[j + 1];
					a[j + 1] = k;
			}
		}
	}
	if (s > 0) 
	{
		for (s; s > 0; s--)
		{
			k = a[s - 1];
			a[s - 1] = a[s];
			a[s] = k;
		}
	}
	
	for (int i = 0; i < n; i++)printf("%d", a[i]);
}
