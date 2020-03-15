#include <stdio.h>

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if (x >= y && x >= z) printf("First number is maximal");
	if (y >= x && y >= z) printf("Second number is maximal");
	if (z >= x && z >= y) printf("Third number is maximal");
}
