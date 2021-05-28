# 第1週程式(實習課)
## 第1題 基礎題 找零錢
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1/week1-1%E6%89%BE%E9%9B%B6%E9%8C%A2.png)
## 第2題 基礎題 因數個數
```c
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n ; i++){
		if (n%i==0) ans++;
	}
	printf("%d\n", ans);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1/week1-2%E5%9B%A0%E6%95%B8%E5%80%8B%E6%95%B8.png)
## 第3題 基礎題 找倍數
```c
#include <stdio.h>
int main()
{
	int a[10], ans=0;
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
		if(a[i]%3==0) ans++;
		
	}
	printf("%d\n", ans);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1/week1-3%E6%89%BE%E5%80%8D%E6%95%B8.png)
## 第4題 基礎題 整數轉換為等級
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n>=90)printf("A\n");
	else if(n>=80)printf("B\n");
	else if(n>=60)printf("C\n");
	else printf("F\n");

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1/week1-4%E6%95%B4%E6%95%B8%E8%BD%89%E6%8F%9B%E7%AD%89%E7%B4%9A.png)
## 第5題 進階題 分式化簡
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1/week1-5%E5%88%86%E5%BC%8F%E5%8C%96%E7%B0%A1.png)
