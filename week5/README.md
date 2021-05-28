# 第5週 程式 (正課)
## 第1題
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]="majority";
    printf("%s\n", line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("現在印出來的line4: ==%s==\n", line4);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week5/week5-1(%E8%AA%B2).png)
## 第2題
```c
#include <stdio.h>
int main()
{
    char line[5][10]{"decline", "proper", "majority", "bullet", "shop"};
    for(int i=0; i<5; i++){
        printf("%s\n", line[i]);
    }
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week5/week5-2(%E8%AA%B2).png)
## 第3題
```c
#include <stdio.h>
int main()
{
    char line[5][10]{"decline", "proper", "majority", "bullet", "shop"};
    for(int i=0; i<5; i++){
        printf("%s\n", line[i]);
    }
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week5/week5-3(%E8%AA%B2).png)
## 第4題
```c
#include <stdio.h>
int main()
{
    printf("請看看值是多少: %d", '\0');
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week5/week5-4(%E8%AA%B2).png)
## 第5題
```c
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if( strcmp(line, line2) > 0 ){
        printf("¥ªÃä¤j\n");
    }
    else{
        printf("¥kÃä¤j\n");
    }
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week5/week5-5(%E8%AA%B2).png)
