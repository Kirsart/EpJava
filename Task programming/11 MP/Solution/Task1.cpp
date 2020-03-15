#include <stdio.h>

int isEven(int n)
{
	if (n % 2 == 0) return 1;
	else return 0;
}



int main()
{
	int  n;
	scanf("%d", &n);
	if (isEven(n) == 1) printf("Even");
	else printf("Odd");
}

