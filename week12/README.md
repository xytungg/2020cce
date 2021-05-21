## 第12週 
### UVA10062 告訴我頻率
#### step1 Input Output 完成
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets( line ) ; t++){//step1 Input
		int ans[256]={};//{0, 0, 0, 0, 0...}
	
		for(int i=0; line[i]!=0 ; i++){
			char c =line[i];
			ans[c]++;
		}///step3 字串的 for 迴圈
	
		if(t>0) printf("\n");//車廂前面掛空白行
		for(int i=0; i<256; i++){//step2 Output
			if(ans[i]>0) printf("%d %d\n", i, ans[i]);
		}
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week12/week12-1.png)
#### step2 利用2層for迴圈 進行排序的交換 而且不只換 ans[i] 陣列 也要換字母 c[i] 陣列
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets( line ) ; t++){//step1 Input
		int ans[256]={};//{0, 0, 0, 0, 0...}
		char  c[256]={};//{0, 1, 2, 3...,65, 66, 67...};
		for(int i=0; i<256; i++) c[i] = i;
		
		for(int i=0; line[i]!=0 ; i++){
			char c = line[i];
			ans[c]++;
		}///step3 字串的 for 迴圈
		
		for(int i=0; i<256; i++){//左手i  \\右手排序
			for(int j=i+1; j<256; j++){//右手j
				if( ans[i] >ans[j]){
					int  temp=ans[i];//交換ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];//交換字母
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0) printf("\n");//車廂前面掛空白行
		for(int i=0; i<256; i++){//step2 Output
			if(ans[i]>0) printf("%d %d\n", c[i], ans[i]);
		}
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week12/week12-2.png)
#### step3 把第2個比較規則也完成
```
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets( line ) ; t++){//step1 Input
		int ans[256]={};//{0, 0, 0, 0, 0...}
		char  c[256]={};//{0, 1, 2, 3...,65, 66, 67...};
		for(int i=0; i<256; i++) c[i] = i;
		
		for(int i=0; line[i]!=0 ; i++){
			char c = line[i];
			ans[c]++;
		}///step3 字串的 for 迴圈
		
		for(int i=0; i<256; i++){//左手i  \\右手排序
			for(int j=i+1; j<256; j++){//右手j
				if( ans[i] >ans[j]){
					int  temp=ans[i];//交換ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];//交換字母
					c[i]=c[j];
					c[j]=t;
				}
				if( ans[i] == ans[j] && c[i]<c[j]){
					int  temp=ans[i];//交換ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];//交換字母
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0) printf("\n");//車廂前面掛空白行
		for(int i=0; i<256; i++){//step2 Output
			if(ans[i]>0) printf("%d %d\n", c[i], ans[i]);
		}
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week12/week12-3.png)
### UVA299 Train Swapping 
#### step1 先解決 Input, Output
```C
#include <stdio.h>
int a[100];
int main()
{
	int T;//step1 Input 有幾筆
	scanf("%d", &T);
	for(int t=0; t<T; t++){
		int N;
		scanf("%d", &N);
		for(int i=0; i<N; i++){//step2 Input到陣列 a[i]
			scanf("%d", &a[i]);
		}
		int ans=0;
		
		//step3 Output
		printf("Optimal train swapping takes %d swaps.\n");
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week12/week12-4.png)
#### step2 利用泡泡排序法全部完成
```c
#include <stdio.h>
int a[100];
int main()
{
	int T;//step1 Input 有幾筆
	scanf("%d", &T);
	for(int t=0; t<T; t++){
		int N;
		scanf("%d", &N);
		for(int i=0; i<N; i++){//step2 Input到陣列 a[i]
			scanf("%d", &a[i]);
		}
		
		int ans=0;
		
		for(int k=0; k<N-1; k++){
			for(int i=0; i<N-1; i++){//泡泡排序
				if( a[i] > a[i+1] ){
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				ans++;
				}
			}
		}
		//step3 Output
		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week12/week12-5.png)
### UVA11321 Sort! Sort!! and Sort!!! 
#### step1 先解決 Input Output 問題
```c
#include <stdio.h>
int a[10000];
int main()
{
	int N, M;//step1 N, M 讀入
	while ( scanf("%d %d", &N, &M) == 2){
		for(int i=0; i<N; i++){//step2 Input N行
			scanf("%d", &a[i]);
		}
		//step3 Output
		printf("%d %d\n", N, M);
		for(int i=0; i<N; i++){
			printf("%d\n", a[i]);
		}
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week12/week12-6.png)