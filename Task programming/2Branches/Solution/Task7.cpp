
#include <stdio.h>

int main()
{
	int n, k, t;
	scanf("%d %d", &n, &k);
	if (n <= k) t = 2;
	else if (n * 2 % k == 0) t = n * 2 / k;
	else t = n * 2 / k + 1;
	
	printf("%d", t);
}