# 第11週程式(實習課)
## 進階題：字串中的數字個數 
## 進階題：利用自訂函式最大值max與最小值min求出兩者之差
## 進階題：奇數之和 
## 進階題：兩數間可被7整除的數 
## 基礎題：整數二元四則運算 
##基礎題：幾日為星期幾 
## 基礎題：零錢總額 
## 基礎題：兩數平方差 
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
