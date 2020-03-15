#include <stdio.h>
int main()
{
	int n, array[100][100], overmd = 0, md = 0, undermd = 0, k = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)	for (int j = 0; j < n; j++)	scanf("%d", &array[i][j]);
	for (int i = 0; i < n; i++)
	{
		md += array[i][k];
		for (int j = 0; j < k; j++)	undermd += array[i][j];
		k++;
		for (int j = k; j < n; j++)	overmd += array[i][j];
	}
	printf("%d\n", overmd);
	printf("%d\n", md);
	printf("%d\n", undermd);
	
}

