# 第13週程式(實習課)
## 第1題 進階題：求11 +22+33+…+nn。
```c
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		ans=ans+i*10+i;
	}
	printf("%d", ans);
}
```
## 第2題 進階題 求兩數之最大公因數
```c
#include<iostream>
using namespace std;
int GCD(int a, int b){
	int m, ans=1;
	if(a<b)m=a;
	else m=b;
	for(int i=2; i<=m; i++){
		if(a%i==0 && b%i==0) ans=i;
	}
	return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```
## 第3題 進階題 區間測速-超速之王 
```c
#include <stdio.h>
int main()
{
	int min, a, index=1;
	scanf("%d", &min);
	for(int i=2; i<=10; i++){
		scanf("%d", &a);
		if(min>a){
			min=a;
			index=i;
		}
	}
	int s=60*60*1.2/min;
	printf("%d %d", index, s);
}
```
## 第4題 進階題 10數排序，從大到小排好 
```c
#include <stdio.h>
int main()
{
	int a[10];
	int temp;
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ", a[i]);
	}
}
```
## 第5題 基礎題 正整數平方總和 
```c
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		ans=ans+i*i;
	}
	printf("%d", ans);
}
```
## 第6題 進階題 兩數之間的3倍數總和 
```c
#include <stdio.h>
int main()
{
	int a, b, ans=0;
	scanf("%d%d", &a, &b);
	for(int i=a; i<=b; i++){
		if(i%3==0)ans=ans+i;
	}
	printf("%d", ans);
}
```
## 第7題 基礎題 判斷座標的象限 
```c
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>0 && b>0) printf("1\n");
	else if(a<0 && b>0) printf("2\n");
	else if(a<0 && b<0) printf("3\n");
	else if(a>0 && b<0) printf("4\n");
}
```
## 第8題 基礎題 輸入n (n>0)， 求n之所有因數和
```c
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(n%i==0)ans=ans+i;
	}
	printf("%d", ans);
}
```
# 第13週程式(正課)
## 互動程式設計 (遊戲、工具)—倒數計時器
### step1 開啟Processing,使用size()還有background()開出有背景色的窗,可用小畫家編輯色彩
```c
size(1024, 400);
background( 0, 66, 0);
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week13/week13-1.png)
### step2 互做mousePressed的互動,先有void setup()及 void draw(),再用if(mousePressed) 及else來切換
```c
void setup(){//只做一次設定
  size(1024, 400);
}
void draw(){//每秒狂做60次
  if(mousePressed) background(9, 75, 130);
  else background( 0, 66, 0);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week13/week13-2.png)
### step3 用textSize()調字大小,text()畫出字,void mousePressed()做按下去的動作
```c
void setup(){//只做一次設定
  size(1024, 400);
}
void draw(){//每秒狂做60次
  if(mousePressed) background(9, 75, 130);
  else background( 0, 66, 0);
  textSize(50);//字的大小 設50號
  text(a, 100, 100);//將a在100, 100畫出來
}
int a=0;//外部變數
void mousePressed(){//按下去時 會呼叫這個函式
  a++; 
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week13/week13-3.png)
### step4 利用hour()小時,minute()分鐘,second()秒,再用特別的字串加法,顯示垷在的時間
```c
void setup(){
  size(1024, 400);
}
void draw(){
  background( 0, 60, 0);
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  text( "Now:"+ h + ":" + m + ":" + s , 100, 100);
}//      字串   數  字串  數  字串  數
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week13/week13-4.png)
### step5 利用 textFont()改成字型createFont()的標楷體, 甪乘上60 60 來算出總秒數
```c
void setup(){
  size(1024, 400);
  textFont( createFont("標楷體", 50));
}
void draw(){
  background( 0, 60, 0);
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  text( "Now:"+ h + ":" + m + ":" + s , 100, 100);//現在時間
  int total = h*60*60 + m*60 + s;//總秒數
  text( "總秒數:" + total, 100, 200);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week13/week13-5.png)
### step6 
```c
void setup(){
  size(1024, 400);
  textFont( createFont("標楷體", 50));
}
void draw(){
  background( 0, 60, 0);
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  text( "Now:"+ h + ":" + m + ":" + s , 100, 100);//現在時間
  int total = h*60*60 + m*60 + s;//總秒數
  int total2=12*60*60 + 0*60 +0;//目標時間的總秒數
  text( "總秒數:" + total, 100, 200);
  int ans =total2-total;
  int hh = ans/60/60, mm= ans/60%60, ss=ans%60;
  text( "還剩下:" + hh + ":" + mm + ":" + ss , 100, 300); 
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week13/week13-6.png)
