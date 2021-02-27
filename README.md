# 2020cce
## 第1週實習課程式
### 第1題 基礎題 找零錢

```c
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=10000; i>0; i--){
		if(a%i==0&&b%i==0){
		a=a/i;
		b=b/i;
	}
	}
	printf("%d %d\n", a, b);

}
```
