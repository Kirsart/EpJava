
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c&& a + c > b&& b + c > a) {
		if (a == b && b == c) printf("Triangle is equilateral");
		else if (a == b || b == c || c == a) printf("Triangle is isosceles");
		else printf("Triangle is scalene");
	}
	else printf("Triangle is invalid");

}