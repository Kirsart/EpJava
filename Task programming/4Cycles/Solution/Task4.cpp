#include <stdio.h>
int	main()
{
	int n, m, c;
	scanf("%d", &n);
	m = n % 10;
	do
	{
		n = n / 10;
		c = n % 10;
		if (m < c) m = c;
		
	} while (n > 1);
	
	printf("%d", m);
}