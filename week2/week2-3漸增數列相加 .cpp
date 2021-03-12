#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1; i<n; i++){
		ans=ans+i*(i+1);

	}
	printf("%d\n", ans);
}
