# 第4週程式(實習課)
## 第1題 進階題 除惡務盡 
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-1%E9%99%A4%E6%83%A1%E5%8B%99%E7%9B%A1.png)
## 第2題 進階題 擲骰統計
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-2%E6%93%B2%E9%AA%B0%E7%B5%B1%E8%A8%88.png)
## 第3題 進階題 函數找整數的最大數字
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-3%E5%87%BD%E6%95%B8%E6%89%BE%E6%95%B4%E6%95%B8%E7%9A%84%E6%9C%80%E5%A4%A7%E6%95%B8%E5%AD%97.png)
## 第4題 進階題 星星等腰三角
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-4%E6%98%9F%E6%98%9F%E7%AD%89%E8%85%B0%E4%B8%89%E8%A7%92.png)
## 第5題 基礎題 分開整數的每個數字
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-5%E5%88%86%E9%96%8B%E6%95%B4%E6%95%B8%E7%9A%84%E6%AF%8F%E5%80%8B%E6%95%B8%E5%AD%97.png)
## 第6題 基礎題 字元判別
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-6%E5%AD%97%E5%85%83%E5%88%A4%E5%88%A5.png)
## 第7題 基礎題 數字之首
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-7%E6%95%B8%E5%AD%97%E4%B9%8B%E9%A6%96.png)
## 第8題 基礎題 輸出從0到N的偶數
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-8%E8%BC%B8%E5%87%BA%E5%BE%9E0%E5%88%B0N%E7%9A%84%E5%81%B6%E6%95%B8.png)
# 第4週程式(正課)
## 第1題
```c
#include <stdio.h>

struct POINT {
	float x, y;
};

int main()
{
	struct POINT a;
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-1(%E8%AA%B2).png)
## 第2題
```c
#include <stdio.h>
struct POINT {
	float x, y;
};
int main(){
	struct POINT a={ 4.1, 3.2 };
	printf("%f %f\n", a.x, a.y);
	
	return ;
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-2(%E8%AA%B2).png)
## 第3題
```c
#include <stdio.h>
struct POINT {
	float x, y;
};
int main(){
	struct POINT a={ 4.1, 3.2 };
	printf("%f %f\n", a.x, a.y);
	
	a.x=1;
	a.y=2;
	printf("%f %f\n", a.x, a.y);
	return 0;
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-3(%E8%AA%B2).png)
## 第4題
```c
#include <stdio.h>
struct DATA {
	int x, y;
} a[3];
struct DATA b={100, 200};

int main(){
	for(int i=0; i<3; i++){
		printf("a[%d]:%d %d\n", i, a[i].x, a[i].y);
	}
	printf("b: %d %d\n", b.x, b.y);
	
	struct DATA c;
	printf("c: %d %d 像亂碼\n", c.x, c.y);
	
	c=b;
	printf("c: %d %d\n", c.x, c.y);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-4(%E8%AA%B2).png)
## 第5題
```c
#include <stdio.h>
struct POINT {
	float x, y, z;
};

struct POINT point[5]={{0, 0, 0},{1, 0, 0},{0, 1, 0},{0, 0, 1},{1, 1, 1}};

int main()
{
	struct POINT * p = &point[0];
	printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);
	
	p++;
	printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);
	
	p++
	printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week4/week4-5(%E8%AA%B2).png)
