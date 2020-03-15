#include <stdio.h>
int	main()
{
	int n, c, s = 0;
	scanf("%d", &n);
	do
	{
		c = n % 10;
		s += c;
		n = n / 10;
	} while (n > 0);
	printf("%d", s);
}
