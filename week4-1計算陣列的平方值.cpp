#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n;i++ ){
		scanf("%d", &a[i]);
		a[i] = a[i]*a[i];
		printf("%d,", a[i]);


	}
	printf("\n");
}
