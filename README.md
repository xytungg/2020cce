## 第10週 程式 (正課)
### 10226

```c
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n", &T);//讀資料
	
	for(int t=0; t<T; t++){
		int N=0;
		while( gets(line)!=NULL){//讀失敗會變NULL
			if( strcmp(line, "")==0 )break;//空行也要離開
			
			printf("%s\n", line);
		}
		printf("========分隔線========\n");
	}
}
```
```c
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n", &T);//讀資料
	
	for(int t=0; t<T; t++){
		int N=0;
		while( gets(line)!=NULL){//讀失敗會變NULL
			if( strcmp(line, "")==0 )break;//空行也要離開
			
			printf("%s\n", line);
			N++;//統計樹的數目
		}
		printf("有幾棵樹? %d\n", N);
		printf("========分隔線========\n");
	}
}
