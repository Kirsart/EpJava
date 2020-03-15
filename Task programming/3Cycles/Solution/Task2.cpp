
#include <stdio.h>

int main()
{
	int n, i = 0;
	scanf("%d", &n);
	while (n != 0) {
		scanf("%d", &n);
		i++;
	}
	printf("%d", i);
}