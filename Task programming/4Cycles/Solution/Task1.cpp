#include <stdio.h>
int	main()
{
	int n;
	scanf("%d", &n);
	printf("%d", n % 10);
	n = n / 10;
	do
	{
		printf(" %d", n % 10);
		n = n / 10;
	} while (n > 0);
	
}
