#include <stdio.h>

int isPrime(int n)
{
	int m = 0;
	for (int i = 1; i <= n/2; i++)if (n % i == 0) m++;
	if (m == 1)return 1;
	else return 0;
}


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n/2; i++)
	{
		if (isPrime(i) == 1)
		{
			if (isPrime(n - i) == 1) printf("%d %d\n", i, n - i);
		}
	}
}