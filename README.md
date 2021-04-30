## 第10週 程式 (正課)
### 顆星廣場 一顆星 10226 統計樹名
#### step1
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
#### step2
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
```
#### step3
```c
#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][32];//step4 陣列 tree
int main()
{
	int T;
	scanf("%d\n\n", &T);//step1 讀資料
	
	for(int t=0; t<T; t++){
		int N=0;//我們需要知道有幾棵樹
		while( gets(line)!=NULL){//step2 讀失敗會變NULL
			if( strcmp(line, "")==0 )break;//空行也要離開
			
			strcmp( tree[N], line);//step4 把樹的名字放到tree
			//printf("%s\n", line);
			N++;//step3 統計樹的數目
		}
		printf("有幾棵樹? %d\n", N);
		
		//照樹的名字來排序 => 陣列在哪裡
		
		for(int i=0; i<N; i++){
			printf("%s\n", tree[i] );//step 把tree[i]印出來
		}
		
		printf("========分隔線========\n");
	}
}
```
