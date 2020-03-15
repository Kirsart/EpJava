#include <stdio.h>

int	main()
{
	int n, x, y, hour1 = 0, minute1 = 0, hour2 = 0, minute2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x < 0 && y > 0)	hour1++;
		else if (x > 0 && y > 0)	hour2++;
		else if (x < 0 && y < 0)	minute1++;
		else if (x > 0 && y < 0)	minute2++;
	}
	if (hour1 > 2 || hour2 > 3 || minute1 > 5 || minute2 > 9) printf("Clock is broken");
	else printf("%d%d:%d%d", hour1, hour2, minute1, minute2);
}
