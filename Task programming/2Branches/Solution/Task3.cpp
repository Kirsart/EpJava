#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d", &a, &d, &e, &f);
	if (f + d >=10 )
	{
		b = (f + d)%10;
		c =  a - 1 - e;
	}
	else
	{
		b = f + d;
		c = a - e;
	}
	printf("%d %d", b, c);	
}