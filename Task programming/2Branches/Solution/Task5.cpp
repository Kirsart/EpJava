
#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	if (x > 0) printf("%d", 1);
	if (x < 0) printf("%d", -1);
	if (x == 0) printf("%d", 0);
}