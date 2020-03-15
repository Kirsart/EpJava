#include <stdio.h>

int main()
{
	int n, s, c;
	scanf("%d %d", &n, &s);
	if (n == 0 || s%n != 0) scanf("%d %d", &n, &s);
	c = s / n + 1 - n;
	if (c % 2 == 0) scanf("%d %d", &n, &s);
	else
	{
		printf("%d", c);
		while (n != 1) {
			c = c + 2;
			n = n - 1;
			printf(" %d", c);	
		}
	}
}
