# 第14週
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
