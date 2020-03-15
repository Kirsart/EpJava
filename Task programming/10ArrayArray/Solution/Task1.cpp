#include <stdio.h>
int main()
{
	int m, n, array[100][100], maxelem = -100, indxmaxel = 0;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &array[i][j]);
			if (array[i][j] > maxelem)
			{
				maxelem = array[i][j];
				indxmaxel = j;
			}

		}
	}
	for (int i = 0; i < m; i++)
	{
		int k = array[i][0];
		array[i][0] = array[i][indxmaxel];
		array[i][indxmaxel] = k;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	printf("%d ", array[i][j]);
		putchar('\n');
	}
}

