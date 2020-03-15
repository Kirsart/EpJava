
#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d", &a, &d, &e, &f);
	if (f < d)
	{
		c = f + 10 - d;
		b = e - 1 - a;
	}
	else
	{
		c = f - d;
		b = e - a;
	}
	printf("%d %d", c, b);
	
}