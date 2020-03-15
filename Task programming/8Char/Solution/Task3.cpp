#include <stdio.h>

int main()
{
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch > 96 && ch < 123) putchar(ch-32);
		else putchar(ch);
		ch = getchar();
	}
}