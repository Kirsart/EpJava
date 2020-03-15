#include <stdio.h>
int main()
{
	int a = 0, b = 0, i = 0;
	char ch;
	ch = getchar();
	while (ch !='\n')
	{
		i++;
		if (i % 2 != 0)
		{
			a = 10 * a + (ch - 48);
			ch = getchar();
		}
		else 
		{
			b = 10 * b + (ch - 48);
			ch = getchar();
		}
	}
	
	printf("%d", a);

}
