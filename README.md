# 2020cce
## 第1週程式(實習課)
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1-1%E6%89%BE%E9%9B%B6%E9%8C%A2.png)
### 第2題 基礎題 因數個數
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1-2%E5%9B%A0%E6%95%B8%E5%80%8B%E6%95%B8.png)
### 第3題 基礎題 找倍數
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1-3%E6%89%BE%E5%80%8D%E6%95%B8.png)
### 第4題 基礎題 整數轉換為等級
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1-4%E6%95%B4%E6%95%B8%E8%BD%89%E6%8F%9B%E7%AD%89%E7%B4%9A.png)
### 第5題 進階題 分式化簡
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week1-5%E5%88%86%E5%BC%8F%E5%8C%96%E7%B0%A1.png)

## 第2週程式(實習課)
### 第1題 進階題 讀入整數反序列印
```c
#include <stdio.h>
int a[10];
int main()
{
	int n;
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
		if(a[i]==0){
		n=i;
		break;
	}
}
	for(int i=n-1;i>=0;i--){
		printf("%d ", a[i]);
	}
	printf("\n");
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2-1%E8%AE%80%E5%85%A5%E6%95%B4%E6%95%B8%E5%8F%8D%E5%BA%8F%E5%88%97%E5%8D%B0.png)
### 第2題 進階題 A的B次方函數
```c
#include <stdio.h>
int MYPOWER (int a, int b)
{
	int ans=1;
	for(int i=1; i<=b; i++){
		ans = ans *a;
		}
		return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2-2%20A%E7%9A%84B%E6%AC%A1%E6%96%B9%E5%87%BD%E6%95%B8.png)
### 第3題 進階題 漸增數列相加
```c
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
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2-3%E6%BC%B8%E5%A2%9E%E6%95%B8%E5%88%97%E7%9B%B8%E5%8A%A0.png)
### 第4題 基礎題 判別正方形
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2-4%E5%88%A4%E5%88%A5%E6%AD%A3%E6%96%B9%E5%BD%A2%20.png)
### 第5題 進階題 2進位轉10進位
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(a==0)printf("0\n");
	else if(a==1)printf("1\n");
	else if(a==10)printf("2\n");
	else if(a==11)printf("3\n");
	else if(a==100)printf("4\n");
	else if(a==101)printf("5\n");
	else if(a==110)printf("6\n");
	else if(a==111)printf("7\n");
	else if(a==1000)printf("8\n");
	else if(a==1001)printf("9\n");
	else if(a==1010)printf("10\n");
	else if(a==1011)printf("11\n");
	else if(a==1100)printf("12\n");
	else if(a==1101)printf("13\n");
	else if(a==1110)printf("14\n");
	else if(a==1111)printf("15\n");
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2-5%202%E9%80%B2%E4%BD%8D%E8%BD%8910%E9%80%B2%E4%BD%8D%20.png)
### 第6題 進階題 均標與前標計算
```c
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
	printf("均標:%0.1f\n前標:%0.1f\n", all/N, t/x);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2-6%E5%9D%87%E6%A8%99%E8%88%87%E5%89%8D%E6%A8%99%E8%A8%88%E7%AE%97%20.png)
