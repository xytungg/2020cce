# 第11週程式(實習課)
## 第1題 進階題 字串中的數字個數 
```c
#include <stdio.h>
int main()
{
	char c[80]; 
	int ans=0;
	scanf("%s", &c);
	int i=0;
	while(c[i]!='\0'){
		if(c[i]>='0' && c[i]<='9')ans++;
		i++;
	}
	printf("%d", ans);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week11/week11-1(%E5%AF%A6).png)
## 第2題 進階題 利用自訂函式最大值max與最小值min求出兩者之差
```c
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	if(a>b && a>c && a>d) return a;
	if(b>a && b>c && b>d) return b;
	if(c>a && c>b && c>d) return c;
	if(d>a && d>b && d>c) return d;	
}
int min(int a, int b, int c, int d)
{
	if(a<b && a<c && a<d) return a;
	if(b<a && b<c && b<d) return b;
	if(c<a && c<b && c<d) return c;
	if(d<a && d<b && d<c) return d;		
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week11/week11-2(%E5%AF%A6).png)
## 第3題 進階題 奇數之和 
```c
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if((i%2)!=0) ans=ans+i;
	}
	printf("%d", ans);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week11/week11-3(%E5%AF%A6).png)
## 第4題 進階題 兩數間可被7整除的數 
```c
#include <stdio.h>
int main()
{
	int a, b, temp;
	scanf("%d%d", &a, &b);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	for(int i=a; i<=b; i++){
		if(i%7==0) printf("%d ", i);
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week11/week11-4(%E5%AF%A6).png)
## 第5題 基礎題 整數二元四則運算
```c
#include <stdio.h>
int main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	if(c=='/') printf("%d", a/b);
	else if(c=='*') printf("%d", a*b);
	else if(c=='+') printf("%d", a+b);
	else if(c=='-') printf("%d", a-b);

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week11/week11-5(%E5%AF%A6).png)
## 第6題 基礎題 幾日為星期幾
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n%7==0)printf("6");
	else printf("%d", n%7-1);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week11/week11-6(%E5%AF%A6).png)
## 第7題 基礎題 零錢總額 
```c
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", 50*a+5*b+1*c);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week11/week11-7(%E5%AF%A6).png)
## 第8題 基礎題 兩數平方差 
```c
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a*a-b*b);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week11/week11-8(%E5%AF%A6).png)
# 第11週 程式 (正課)
## work1
```c

#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare( const void *p1, const void *p2)
{
    int d1 = * (int*)p1;
    int d2 = * (int*)p2;
    if( d1 > d2) return 1;
    if( d1 ==d2) return 0;
    if( d1 < d2) return -1;
}
int main()
{
    qsort (a, 10, sizeof(int), compare);
    for(int i=0; i<10; i++){
        printf("%d", a[i]);
    }
}
```
## work2
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[2000][80];
char other[80];

int compare( const void *p1, const void *p2){
	char *s1 =(char*)p1;
	char *s2 =(char*)p2;
	
	int result = strcmp( s1, s2);
	if(result>0)  return 1;
	if(result==0) return 0;
	if(result<0)  return -1;
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", line[i]);
		gets( other );
	}
	qsort(line, n ,80, compare);
	printf("%s ", line[0]);
	int ans=1;
	
	for(int i=0; i<n-1; i++){
		if(strcmp( line[i], line[i+1])==0 ){
			ans++;
		}else{
			printf("%d\n", ans);
			printf("%s ", line[i+1]);
			ans=1;
			}
	}
	printf("%d\n", ans);
	
}
```
## work3
```c
#include <stdio.h>
struct data{
    int ans;///有幾個
    char c;///字母
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n", box.c, box.ans);


}
```
## work4
```c
#include <stdio.h>
typedef struct data{
    int ans;///有幾個
    char c;///字母
}DATA;
///struct data box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n", box.c, box.ans);

}
```
## work5
```c
#include <stdio.h>
char line[2000];
int main()
{
    for(int t=0; gets(line); t++){
        if( t>0 ) printf("\n");
        printf("blahblahblah\n");
        printf("blahblahblah\n");
        printf("blahblahblah\n");
    }
}
```
## work6
```c
#include <stdio.h>
char line[2000];
int ans[256];//step3 統計有幾個字母 ex. ans[65]=3 表示'A'有3次
int main()
{//step1 input 一次一整行 很多一整行
    for(int t=0; gets(line); t++){
        
        for(int i=0; i<256; i++) ans[i]=0;///step3 清乾淨
        
        for(int i=0; line[i]!=0; i++){///step4 字串的迴圈
            char c = line[i];//step4 第i個字母
            ans[ c ] ++;//step4 統計到ans[]裡面
            
        }
        //step2 output 對應印出來
        if( t>0 ) printf("\n");
        for(int i=0; i<256; i++){//step5 真的印出來
            if( ans[i]>0 )printf("%d %d\n", i, ans[i]);
        }
    }
}
```
