#include <stdio.h>
int main()
{
	int n, s, e;
	int space[100], elem[100], ch[100];
	scanf("%d", &n);
	char c;
	for (int i = 0; i < n; i++)
	{
		getchar();
		c = getchar();
		ch[i] = c;
		scanf("%d %d", &s, &e);
		space[i] = s;
		elem[i] = e;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < space[i]; j++)	putchar(32);
		for (int j = 0; j < (elem[i] - space[i]); j++) putchar(ch[i]);
		printf("\n");
	}

}

