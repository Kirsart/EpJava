#include <stdio.h>
int main()
{
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch > 47 && ch < 58) putchar(ch);
		ch = getchar();
	}

}

