#include <stdio.h>
int main()
{
	int n, array[100][100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)	for (int j = 0; j < n; j++)	scanf("%d", &array[i][j]);

	for (int i = 0; i < n; i++)
	{
		printf("%d", array[0][i]);
		for (int j = 1; j < n; j++)	printf(" %d", array[j][i]);
		putchar('\n');
	}
}
