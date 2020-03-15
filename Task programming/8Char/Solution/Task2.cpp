#include <stdio.h>

int main()
{
	int a = 0, b = 0, i = 0;
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		i++;
		if (i == 1)
		{
			putchar(ch);
			ch = getchar();
		}
		else
		{
			putchar(36);
			putchar(ch);
			ch = getchar();
		}
	}
}
