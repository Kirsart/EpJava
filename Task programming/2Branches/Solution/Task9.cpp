
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a) {
		if ((a*a + b*b) == (c*c) || (c * c + b * b) == (a * a) || (a * a + c * c) == (b * b)) printf("Triangle is rectangular");
		else if ((a * a + b * b) < (c * c) || (c * c + b * b) < (a * a) || (a * a + c * c) < (b * b)) printf("Triangle is content obtuse angle");
		else printf("Triangle is consist of sharp angles");
	}
	else printf("Triangle is invalid");
}

