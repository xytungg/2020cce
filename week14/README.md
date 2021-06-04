# 第14週程式(實習課)
## 第1題 進階題 奇數反流 
```c
#include <stdio.h>
int main()
{
	int n, a[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=n-1; i>=0; i--){
		if(a[i]%2==1) printf("%d ", a[i]);
	}

}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-1(%E5%AF%A6).png)
## 第2題 基礎題 大位王 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n<0) n=-n;
	while((n/10)>0){
		n=n/10;
	}
	printf("%d\n", n);

	
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-2(%E5%AF%A6).png)
## 第3題 基礎題 輸入西元y年，判斷該y年是否為閏年 
```c
#include <stdio.h>
int main()
{
	int y;
	scanf("%d", &y);
	if(y%4==0 && y%100!=0) printf("%d is a leap year.\n", y);
	else printf("%d is not a leap year.\n", y);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-3(%E5%AF%A6).png)
## 第4題 基礎題 把數字倒著印出來 
```c
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(int i=9; i>=0; i--){
		printf("%d ", a[i]); 
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-4(%E5%AF%A6).png)
## 第5題 基礎題 區間測速
```c
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(int i=9; i>=0; i--){
		printf("%d ", a[i]); 
	}
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-5(%E5%AF%A6).png)
# 第14週程式(正課)
## 好玩的抽籤
### step1 在 setup()設定裡, 用亂數random(60)取出小於60的數,用text()印出來,textSize()字大小設大一些
```c
void setup(){
  size(300, 200);
  float ans = random(60);//亂數取<60的數
  textSize(30);
  text(ans, 0, 30);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-1.png)
### step2 修改後,利用(int)random(60)將float轉成int, 利用mosuePressed()來改亂數,記得background()清背景
```c
//Q1: 數字有小數點不好 A: 整數無條件捨去
//Q2: 沒有互動 A: 用mousePressed互動
void setup(){
  size(300, 200);
  textSize(30);
}
int ans=0;
void draw(){//畫圖,每秒60次 60fps
  background(23, 94, 32);
  //int ans = (int)random(60)//強制轉型casting
  text(ans, 30, 30);//跳太快了
}
void mousePressed(){
  ans = (int)random(60);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-2.png)
### step3 亂數洗牌,先宣告Java的陣列 int [] a = {...}, 再用for迴圈,印出陣列的值, mousePressed()時,利用random()挑2個數i1,i2,將a[i1],a[i2]交換.zip
```c
//int a[]={1,2,3,4,5,6,7,8,9,10};//C, C++
int []a={1,2,3,4,5,6,7,8,9,10};//Java
void setup(){
  size(400, 200);
  textSize(30);
}
void draw(){
  background(23, 94, 32);
  for(int i=0; i<10; i++){
   text (a[i], i*40, 100); 
  }
}
void mousePressed(){
  int i1 = (int) random(10);
  int i2 = (int) random(10);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}//交換,行數太擠,所以塞成一行,中間是分號喔
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-3.png)
### step4 大樂透,使用作弊的方法,事先亂數洗牌10000次,再拿前面6個數字,當成中獎號碼。小心,Java陣列的宣告有點特別, 要記得裡面用for迴圈放值
```c
//大樂透 抽獎時,會掉下球,49球,挑6球
//int a[]={1,2,3,4,5,6,7,8,9,10....寫49很累
int []a=new int[49];//Java的陣列宣告好
void setup(){
  size(400, 200);
  textSize(30);
  for(int i=0; i<49; i++) a[i] = i+1;//人類:1
}                       //電腦:0
void draw(){
  background(23, 94, 32);
  for(int i=0; i<6; i++){//49只秀6個數
   text (a[i], i*50, 100); 
  }//大樂透抽獎時會掉下球,49球挑6球
}
void mousePressed(){
  for(int i=0; i<10000; i++){
    int i1 = (int) random(49), i2 = (int) random(49);
    int temp =a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-4.png)
### step5 大樂透的球,會慢慢掉出來,有個bug是會N++超過6顆球
```c
//int a[]={1,2,3,4,5,6,7,8,9,10....寫49很累
int []a=new int[49];//Java的陣列宣告好
void setup(){
  size(400, 200);
  textSize(30);        //電腦:0
  for(int i=0; i<49; i++) a[i] = i+1;//人類:1 丟入號碼球
  for(int i=0; i<10000; i++){//大作弊,抽獎前排好
  int i1=(int)random(49), i2=(int)random(49);
  int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(23, 94, 32);
  for(int i=0; i<N; i++){
    fill(255); ellipse(50+i*50, 100, 40, 40);
    textAlign(CENTER, CENTER);//文字對齊:中,中
    fill(0); text(a[i], 50+i*50, 100);
  }//大樂透抽獎時會掉下球,49球挑6球
}
void mousePressed(){
  N++;//其實數字早就決定了 只是慢慢印出來 讓人以為你是慢慢抽
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week14/week14-5.png)
