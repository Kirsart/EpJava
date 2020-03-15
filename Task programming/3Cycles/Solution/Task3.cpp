#include <stdio.h>

int main()
{
	int n, i = 0;
	 do{
		scanf("%d", &n);
		if (n % 2 == 0 && n > 0) i++;
	 } while (n != 0);
	printf("%d", i);
}