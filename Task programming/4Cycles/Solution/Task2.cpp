#include <stdio.h>
int	main()
{
	int n, s = 0;
	scanf("%d", &n);
	do
	{
		s++;
		n = n / 10;
	} while (n > 0);
	printf("%d", s);
}
