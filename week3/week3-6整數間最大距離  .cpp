#include <stdio.h>
int a[100];
int main()
{
	int max, min;
	for(int i=0; i<3;i++){
	scanf("%d", &a[i]);
	min = a[0];
	max = a[0];
	}
	for(int i=0; i<3; i++){
		if(min>a[i]) min = a[i];
		else if (max<a[i]) max = a[i];
	}
	printf("%d\n", max-min);
}
