## 第4週程式(實習課)
### 第1題 進階題 除惡務盡 
```c
#include <stdio.h>

int main()
{
	char a[100];
	scanf("%s", &a);
	int i=0;
	while(a[i]!='\0'){
		if(a[i]!='2')
		printf("%c", a[i]);
		i++;
	}
	printf("\n");
}
```
### 第2題 進階題 擲骰統計
```c
#include <stdio.h>
int main()
{
	char a[100];
	char count[7]={0};
	scanf("%s", &a);
	
	int i=0;
	while (a[i]!='\0'){
		count[a[i]-'0']++;
		i++;
	}
	
	for(int i=1; i<=6; i++){
		printf("%d:%d\n", i, count[i]);
	}
}
```
### 第3題 進階題 函數找整數的最大數字
```c
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max;
	max = n%10;
	while(n>0)
	{
		if((n%10)>max)max= n%10;
		n/=10;
	}
	return max;

}


int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
```
### 第4題 進階題 星星等腰三角
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n; i++){
		for(int j=0; j<n-i;j++)
				printf(" ");
		for(int j=0; j<i*2-1; j++)
			printf("*");
			printf("\n");
	}

}
```
### 第5題 基礎題 分開整數的每個數字
```c
#include <stdio.h>
int main()
{
	 int n;
	 scanf("%d", &n);
	 printf("%d   ", n/10000);
	 printf("%d   ", (n%10000)/1000);
	 printf("%d   ", ((n%10000)%1000)/100);
	 printf("%d   ", (((n%10000)%1000)%100)/10);
	 printf("%d", (((n%10000)%1000)%100)%10);
}
```
### 第6題 基礎題 字元判別
```c
#include <stdio.h>
int main()
{
	char abc;
	scanf("%c", &abc);
	if('A'<=abc && abc<='Z')printf("U");
	else if('a'<=abc && abc<='z')printf("L");
	else if('0'<=abc && abc<='9')printf("D");
	else printf("O");

}
```
### 第7題 基礎題 數字之首
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n>10){
		n = n/10;
		
	}
	printf("%d", n);
}
```
### 第8題 基礎題 輸出從0到N的偶數
```c
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i%2==0)
		printf("%d ", i);
	}
}
```
