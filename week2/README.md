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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2/week2-1%E8%AE%80%E5%85%A5%E6%95%B4%E6%95%B8%E5%8F%8D%E5%BA%8F%E5%88%97%E5%8D%B0.png)
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2/week2-2%20A%E7%9A%84B%E6%AC%A1%E6%96%B9%E5%87%BD%E6%95%B8.png)
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2/week2-3%E6%BC%B8%E5%A2%9E%E6%95%B8%E5%88%97%E7%9B%B8%E5%8A%A0.png)
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2/week2-4%E5%88%A4%E5%88%A5%E6%AD%A3%E6%96%B9%E5%BD%A2%20.png)
### 第5題 進階題 2進位轉10進位
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",8*(a/1000)+4*(a%1000/100)+2*(a%100/10)+(a%10));
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2/week2-5%202%E9%80%B2%E4%BD%8D%E8%BD%8910%E9%80%B2%E4%BD%8D%20.png)
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
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week2/week2-6%E5%9D%87%E6%A8%99%E8%88%87%E5%89%8D%E6%A8%99%E8%A8%88%E7%AE%97%20.png)
