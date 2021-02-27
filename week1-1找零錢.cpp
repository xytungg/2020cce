#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a, b, c;
	a =n/50;
	b =(n%50)/5;
	c =n%5;

	printf("%d=50*%d+5*%d+1*%d\n", n, a, b, c);
}
