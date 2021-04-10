## 第7週 程式 (實習課)
### 第1題 進階題 迴文判斷 
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[3];
	for(int i=0; i<4; i++){
	scanf("%c", &a[i]);
	}
	if(a[0]==a[3] && a[1]==a[2])printf("YES\n");
	else printf("NO\n");	

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-1%E8%BF%B4%E6%96%87%E5%88%A4%E6%96%B7.png)
### 第2題 進階題 函數反序排列數字
```c
#include <stdio.h>
int f (int n)
{
		int p;
		int m=0;
		while(n>0){
			p=n%10;//p是暫存餘數
			n=n/10;//n在更新
			m=p+m*10;//m是答案
		}
		return m;
}
int main()
{
	int n, m;
	scanf("%d", &n);
	printf("%d\n", f(m));
	
}
```

![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-2%E5%87%BD%E6%95%B8%E5%8F%8D%E5%BA%8F%E6%8E%92%E5%88%97%E6%95%B8%E5%AD%97.png)
### 第3題 進階題 陣列找出現次數 
```c
#include <stdio.h>
int main()
{
	char a[100];
	int i, n, x, count=0;
	for(i=0; i<100; i++){
		scanf("%d", &a[i]);
		if(a[i]==0) break;
	}
	
	scanf("%d", &x);
	n=i;
	for(i=0; i<n; i++){
		if(a[i]==x) count++;
		
	}
	printf("%d\n", count);

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-3%E9%99%A3%E5%88%97%E6%89%BE%E5%87%BA%E7%8F%BE%E6%AC%A1%E6%95%B8.png)
### 第4題 進階題 判斷大小 
```c
#include <stdio.h>
int f(int a,int b){
	if(a<b)return -1;
	else if (a==b) return 0;
	else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-4%E5%88%A4%E6%96%B7%E5%A4%A7%E5%B0%8F.png)
### 第5題 進階題 計算一列整數的總和
```c
#include <stdio.h>
int main()
{
	printf("Enter an integer ( 999 to end ): \n");
	
	int n;
	scanf("%d", &n);
	int ans=0;
	while(n!=999)
	{
		ans = ans+n;
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d", &n);
	}
	printf("The total is: %d", ans);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-5%E8%A8%88%E7%AE%97%E4%B8%80%E5%88%97%E6%95%B4%E6%95%B8%E7%9A%84%E7%B8%BD%E5%92%8C.png)
### 第6題 基礎題 計算餘數 
```c
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a%b);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-6%E8%A8%88%E7%AE%97%E9%A4%98%E6%95%B8.png)
### 第7題 基礎題 整數轉換等級 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n>=90) printf("A");
	else if(n<90 && n>80) printf("B");
	else if(n<80 && n>70) printf("C");
	else if(n<70 && n>60) printf("D");
	else printf("F");
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-7%E6%95%B4%E6%95%B8%E8%BD%89%E6%8F%9B%E7%AD%89%E7%B4%9A.png)
### 第8題 基礎題 計程車資計算
```c
#include <stdio.h>
int main()
{
	int n ;
	scanf("%d", &n);
	if(n==1500)printf("100");
	else if( n>1500 ) printf("%d", 100+((n-1500)/250)*5 +5);

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-8%E8%A8%88%E7%A8%8B%E8%BB%8A%E8%B3%87%E8%A8%88%E7%AE%97.png)
### 第9題 基礎題 找零錢 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	

	printf("%d=50*%d+10*%d+5*%d+1*%d", n, n/50, (n%50)/10, (n%50%10)/5, (n%50%10%5)/1 );
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week7/week7-9%E6%89%BE%E9%9B%B6%E9%8C%A2.png)
