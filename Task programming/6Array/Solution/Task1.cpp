#include <stdio.h>

int	main()
{
	int n, a, i, negative = 0, positive = 0, zero = 0, s;
	int m[1000];
	scanf("%d", &n);
	s = n;
	while (n > 0)
	{
		scanf("%d", &a);
		m[i] = a;
		if (a > 0) positive++;
		else if (a < 0) negative++;
		else if (a == 0) zero++;
		n--;
		i++;
	}
	printf("%d\n", positive);
	printf("%d\n", negative);
	printf("%d\n", zero);
	for (int j = 0; j < s; j++)
	{
		printf("%d ", m[j]);
	}
		
}
