#include <stdio.h>

int	main()
{
	int  n, min = 10, number = 0, a, z;
	scanf("%d", &n);
	z = n;
	do
	{
		if (n % 10 < min) min = n % 10;
		n /= 10;
		number++;
	} while (n > 0);
	while ((z % 10) > min)
	{

		number--;
		z /= 10;
	}

	printf("%d", number);
}