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
	int a, b;
	scanf("%d %d", &a, &b);
	for (a; a < b - 1; )
	{
		if (isPrime(a) == 1)
		{
			if (isPrime(a + 2) == 1)
			{
				printf("%d %d\n", a, (a + 2));
				a += 2;
			}
			else a++;
		}
		else a++;
	}
}