### week11程式設計正課
#### work1
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
#### work2
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
#### work3
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
#### work4
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
#### work5
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
