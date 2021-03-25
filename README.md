## 第3週程式(實習課)
### 第1題 進階題 計算陣列的平方值
```c
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n;i++ ){
		scanf("%d", &a[i]);
		a[i] = a[i]*a[i];
		printf("%d,", a[i]);

		
	}
	printf("\n");
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-1.png)
### 第2題 進階題 大小寫轉換
```c
#include <stdio.h>
int main()
{
	int i;
	char c[10];
	scanf("%s", &c);
	i=0;
	while (c[i]!='\0')
	{
		if('A'<=c[i] && c[i]<='Z')printf("%c", c[i]-'A'+'a');
		else if('a'<=c[i] && c[i]<='z')printf("%c", c[i]-'a'+'A');
		else printf("%c", c[i]);
		i++;
	}
	printf("\n");
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-2.png)
### 第3題 基礎題 計算幾週與幾天
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d %d\n", n/7, n%7);



}
```
![image]()
### 第4題 基礎題 計程車資計算
```c
#include <stdio.h>
int main(https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-3.png)
{
	int n;
	scanf("%d", &n);
	if(n<2000)printf("100\n");
	else if(n>2000)printf("%d\n", 100+(n-2000+499)/500*5);

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-4.png)
### 第5題 基礎題 兩數間可被5整除的整數
```c
#include <stdio.h>
int main()
{
	int a, b, k;
	scanf("%d%d", &a, &b);
	if(a>b){
	k=a;
	a=b;
	b=k; 
	}
	for(int i=a; i<=b;i++){
		if(i%5==0) printf("%d\n", i);
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-5.png)
### 第6題 基礎題 整數間最大距離
```c
#include <stdio.h>
int a[100];
int main()
{
	int max, min;
	for(int i=0; i<3;i++){
	scanf("%d", &a[i]);
	min = a[0]; 
	max = a[0];
	}
	for(int i=0; i<3; i++){
		if(min>a[i]) min = a[i];
		else if (max<a[i]) max = a[i];
	}
	printf("%d\n", max-min);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-6.png)
## 第3週程式(正課)
### 第1題
```c
#include <stdio.h>
int main()
{
    int a[5] = {0, 10, 20, 30, 40};
    int *p = &a[2];
    *p = 222;

    p = p + 2;
    *p = 666;

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-1(%E8%AA%B2).png)
### 第2題
```c
#include <stdio.h>
int a[5] = {0, 10, 20, 30, 40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ", a[i]);
        printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
            printf("p心裡的小紙條記的是:%d\n", p);
    p = p + 2;
    *p = 666;
            printAll();
            printf("p心裡的小紙條記的是:%d\n", p);
    p--;
    *p = 555;
            printAll();
            printf("p心裡的小紙條記的是:%d\n", p);

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-2(%E8%AA%B2).png)
### 第3題
```c
#include <stdio.h>
int a[5] = {0, 10, 20, 30, 40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ", a[i]);
        printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
            printf("p心裡的小紙條記的是:%d\n", p);
    p = p + 2;
    *p = 666;
            printAll();
            printf("p心裡的小紙條記的是:%d\n", p);
    p--;
    *p = 555;
            printAll();
            printf("p心裡的小紙條記的是:%d\n", p);

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-3(%E8%AA%B2).png)
### 第4題
```c
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main(){
    int b[10];

    int *p = (int*) malloc( sizeof(int)*10);

    return 0;
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week3/week3-4(%E8%AA%B2).png)
