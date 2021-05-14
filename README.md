### 第12週 10062 告訴我頻率
#### step1
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets( line ) ; t++){//step1 Input
		int ans[256]={};//{0, 0, 0, 0, 0...}
	
		for(int i=0; line[i]!=0 ; i++){
			char c =line[i];
			ans[c]++;
		}///step3 字串的 for 迴圈
	
		if(t>0) printf("\n");//車廂前面掛空白行
		for(int i=0; i<256; i++){//step2 Output
			if(ans[i]>0) printf("%d %d\n", i, ans[i]);
		}
	}
}
```
#### step2
