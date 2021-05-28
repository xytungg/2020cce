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
