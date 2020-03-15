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
	int a[100], n, c=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (isPrime(a[i])==1) c++;
	}
	printf("%d", c);
	
}