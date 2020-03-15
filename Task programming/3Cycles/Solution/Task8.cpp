#include <stdio.h>
#include<math.h>
int	main()
{
	int n, m, k=1;
	double md;
	scanf("%d", &n);
	while (k <= n)
	{
		md = sqrt(k);
		m = (int)md;
		double q = md - m;
		double z = 0.5;
		if (q >= z)	m = m + 1;
		printf("_/%d = %d\n", k, m);
		k++;
	}
}

