#include <stdio.h>

int main()
{
	int n, x, y,  max = 9;
	scanf("%d", &n);
	x = n / 10;
	y = n % 10;
	if (x >= y) max = x;
	else  max = y;
	printf("%d", max);
}