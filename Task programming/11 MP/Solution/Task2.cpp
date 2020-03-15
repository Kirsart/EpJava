#include <stdio.h>

int isPrime(int n)
{
	int m = 0;
	for (int i = 1; i <= n; i++)if (n % i == 0) m++;
	if (m == 2)return 1;
	else return 0;
}



int main()
{
	int  n;
	scanf("%d", &n);
	if (isPrime(n) == 1) printf("Prime");
	else printf("Composite");
}

