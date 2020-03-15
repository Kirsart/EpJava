#include <stdio.h>
int main()
{
	char word[1000], ch;
	int k = 0;
	ch = getchar();
	while (ch != '\n')
	{
		word[k] = ch;
		ch = getchar();
		k++;
	}
	for (int i = 0; i < k; i++)
	{
		if (word[i] != 32) putchar(word[i]);
		else if (word[i-1] != 32) putchar(word[i]);
	}
}

