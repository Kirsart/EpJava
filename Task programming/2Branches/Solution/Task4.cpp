#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) printf("Mother is younger than father");
	if (a < b) printf("Mother is older than father");
	if (a == b) printf("Mother and father are of the same age");
	
}