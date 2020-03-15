#include <stdio.h>

int	main()
{
	int n, k, palindrom, natc;
	scanf("%d", &n);
	natc = n;
	palindrom = n % 10;
	n /= 10;
	do
	{
		k = n % 10;
		palindrom = palindrom * 10 + k;
		n /= 10;
	} while (n > 0);
	 printf("%d", palindrom);
}