#include <stdio.h>

int min_element(int arr[], int n)
{
	int minValue = 100000;
	for (int k; k < n; k++)
	{
		if (arr[k] < minValue)	minValue = arr[k];
	}
	return minValue;
}



int	main()
{
	int  a[1000], n, p[1000], o[1000], g = 0, f = 0;
	int minpositiv = 30000, minnegativ = 30000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{

		if (a[i] > 0)
		{
			p[g] = a[i];
			g++;
		}
		if (a[i] < 0)
		{
			o[f] = a[i]*(-1);
			f++;
		}
	}
	minpositiv = min_element(p, g);
	minnegativ = min_element(o, f)  * (-1);

	printf("%d %d", minpositiv, minnegativ);

}