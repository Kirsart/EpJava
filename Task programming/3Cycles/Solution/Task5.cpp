
#include <stdio.h>

int main()
{
	int n, k;
	scanf("%d", &n);
	for (k = 1; k <= n; k++) 
		printf("%d + %d = %d\n",k, (n+1-k), (n+1));
}