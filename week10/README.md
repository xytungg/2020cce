# 第10週程式(實習課)
## 第1題 進階題 最大公因數gcd 
```c
#include <stdio.h>
int main()
{
	int a, b, ans;
	scanf("%d%d", &a, &b);
	for(int i=10000; i>0; i--){
		if( a%i==0 && b%i==0){
		ans=i;
		break;
		}
	}
	printf("Enter two integers: \nThe greatest common divisor of %d and %d is %d\n", a, b, ans);

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-1(%E5%AF%A6).png)
## 第2題 進階題 字串長度 
```c
#include <stdio.h>
#include <string.h>
char a[100], b[100];
/*int compare(const void *lena, const void *lenb){
	return strcmp((char*)lena, (char*)lenb );
}*/

int main()
{
	int lena, lenb;
	scanf("%s %s", &a, &b);
	
	lena= strlen(a);//字串a的長度
	lenb= strlen(b);//字串b的長度
	
	if ( lena>lenb ) printf("1");
	else if ( lena<lenb ) printf("-1");
	else printf("%d", strcmp(a, b));
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-2(%E5%AF%A6).png)
## 第3題 進階題 函數判斷質數
```c
#include <iostream>
using namespace std;
int prime(int n)
{
	int i;
	for(i=2; i<n; i++){
		if(n%i==0) break;
	}
	if(i==n) return 1;//是質數
	else return 0;//非質數
}

int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-3(%E5%AF%A6).png)
## 第4題 進階題 判斷迴文
```c
#include <stdio.h>
#include <string.h>
char a[10000];
int main()
{
	scanf("%s", &a);
	int i;
	int len;
	len=strlen(a);
	for( i=0; i<(len/2); i++){
		if(a[i] !=a[len-1-i]) break;
	}
		if(i==(len/2)) printf("YES");
		else printf("NO");

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-4(%E5%AF%A6).png)
## 第5題 基礎題 計算餘數及列印
```c
#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	
	printf("Enter two numbers: The remainder is %d\n", x%y);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-5(%E5%AF%A6).png)
## 第6題 基礎題 判別正方形 
```c
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a==b) printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-6(%E5%AF%A6).png)
## 第7題 基礎題 將一連串整數相乘 
```c
#include <stdio.h>
int a[100];
int main()
{
	printf("Enter the number of values to be processed: ");
	int n, ans=1;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Enter a value: ");
		scanf("%d", &a[i]);	
		ans = ans*a[i];
	 	}
	printf("Product of the %d values is %d", n, ans);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-7(%E5%AF%A6).png)
## 第8題 基礎題 平年月份的天數 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n==1 || n==3|| n==5 || n==7 || n==8 || n==10 || n==12) printf("31");
	else if(n==2) printf("28");
	else printf("30");
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-8(%E5%AF%A6).png)
# 第10週 程式 (正課)
## 顆星廣場 一顆星 10226 統計樹名
### step1 讀資料
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-1.png)
### step2 數出正確的樹數目
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-2.png)
### step3 陣列 tree 裡面放樹的名字 印出來
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-3.png)
### step4 qsort() 配合你的 compare() 來把樹名排序
```c
#include <string.h>//strcmp() strcpy()
#include <stdlib.h>//qsort()
char line[1000];
char tree[1000000][32];//step4 陣列 tree
int compare( const void *p1, const void *p2){
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int T;
	scanf("%d\n\n", &T);//step1 讀資料
	
	for(int t=0; t<T; t++){
		int N=0;//我們需要知道有幾棵樹
		while( gets(line)!=NULL){//step2 讀失敗會變NULL
			if( strcmp(line, "")==0 )break;//空行也要離開
			
			strcpy( tree[N], line);//step4 把樹的名字放到tree
			//printf("%s\n", line);
			N++;//step3 統計樹的數目
		}
		//printf("有幾棵樹? %d\n", N);
		//step5 照樹的名字來排序 => step4 陣列在哪裡
		qsort( tree, N, 32, compare );//step5 qsort
		
		int ans=1; //新的開始
		printf("%s", tree[0]);
		for(int i=0; i<N; i++){
			if(strcmp ( tree[i], tree[i+1]) == 0 ){//相同
				ans++;
			}else{//不相同 收尾 + 新的開始
				printf("%d\n", ans);
				ans=1;//新的開始
				printf("%s", tree[i+1]);//新的開始
			}
			//printf("%s\n", tree[i] );//step 把tree[i]印出來
		}
		//printf("========分隔線========\n");
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-4.png)
### step5 印出答案 分成 for迴圈前面開頭 for迴圈中間 [收尾+開頭] for迴圈後面收尾 換算百分比的收尾
```c
#include <stdio.h>
#include <string.h>//strcmp() strcpy()
#include <stdlib.h>//qsort()
char line[1000];
char tree[1000000][32];//step4 陣列 tree
int compare( const void *p1, const void *p2){
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int T;
	scanf("%d\n\n", &T);//step1 讀資料
	
	for(int t=0; t<T; t++){
		int N=0;//我們需要知道有幾棵樹
		while( gets(line)!=NULL){//step2 讀失敗會變NULL
			if( strcmp(line, "")==0 )break;//空行也要離開
			
			strcpy( tree[N], line);//step4 把樹的名字放到tree
			//printf("%s\n", line);
			N++;//step3 統計樹的數目
		}
		//printf("有幾棵樹? %d\n", N);
		//step5 照樹的名字來排序 => step4 陣列在哪裡
		qsort( tree, N, 32, compare );//step5 qsort
		
		if(t>0) printf("\n");
		int ans=1; //新的開始
		printf("%s ", tree[0]);
		for(int i=0; i<N-1; i++){
			if(strcmp ( tree[i], tree[i+1]) == 0 ){//相同
				ans++;
			}else{//不相同 收尾 + 新的開始
				printf("%.4f\n", 100*ans/(float)N );
				ans=1;//新的開始
				printf("%s ", tree[i+1]);//新的開始
			}
			//printf("%s\n", tree[i] );//step 把tree[i]印出來
		}
		printf("%.4f\n", 100*ans/(float)N );
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week10/week10-5.png)
