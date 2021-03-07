#include <stdio.h>
int main()
{
	float a[100],N, all=0, t=0, x=0;
	scanf("%f", &N);
	for(int i=0; i<=N; i++){
		scanf("%f", &a[i]);
		all += a[i];
	}
	for(int i=0;i<=N; i++){
		if(a[i]>=all/N){
			t += a[i];
			x++;
		}
	}
	printf("§¡¼Ð:%0.1f\n«e¼Ð:%0.1f\n", all/N, t/x);
}
