# 程式設計(正課)
## 互動程式設計 攝影機
### step1 安裝Processing-Sketch-Library-AddLibrary,找video,安裝它,便能在程式 import processing.video.星; 再宣告視訊變數 Capture cam 再用size(640,480)開個傳統的視窗要放視訊,最後用 println( Capture.list() ); 印出所有的視訊鏡頭
```
import processing.video.*;//開video外掛
Capture cam;//global全域變數
void setup(){//設定,只做一次
  size(640, 480); //20年前的電腦
  println( Capture.list() );
}//會印出你電腦的全部視訊鏡頭
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week18/week18-1.png)
### step2 接著step01,補上幾行。cam = New Capture(this, 視訊名字); cam.start(); 在void setup()裡 if( cam.available() )  cam.read() 讀視訊, 再用 set(0,0,cam)畫到畫面
```
import processing.video.*;//開video外掛
Capture cam;
void setup(){//設定,只做一次
  size(640, 480); //20年前的電腦
  println( Capture.list() );
  cam = new Capture(this"WebCam");//初始設定
  cam.start();//開啟webcam
}
void draw(){
  if(cam.available() ) cam.read();//讀視訊
  set( 0, 0, cam);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week18/week18-2.png)
## 互動程式設計 螢幕錄影 截圖
### step1
```
import processing.video.*;
Movie movie;
void setup(){
  size(640.480); 
  movie = new Movie(this, "video.mov");
  movie.loop();//movie.play();
}
void draw(){
  if( movie.available() ){
     movie.read(); 
  }
  set( 0, 0, movie );
}

```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week18/week18-3.png)
## 撲克牌
```
String []face={"Spade","Heart","Dimand","Club"};
String []Num={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int []Card=new int[52];
void setup(){
  size(600,200);
  for(int i=0; i<52; i++) Card[i] = i;
  shuffleCard();
}
void shuffleCard(){
  for(int i=0; i<20000; i++){//洗牌洗20000次
  int a = int(random(52));
  int b = int(random(52));
  int temp = Card[a];
  Card[a] = Card[b];
  Card[b] = temp;
  }
}
void drawCard(int i, int x, int y){
  int f = i/13, num = i%13;
  fill(255); rect(x,y, 100,150);
  if( f==1 || f==2 ) fill(255,0,0);
  else fill(0);
  textAlign(CENTER,CENTER);
  textSize(20); text( face[f], x+50,y+50);
  textSize(40); text( Num[num], x+50, y+100);
}
void draw(){
  for(int i=0; i<5; i++){
  drawCard( Card[i], i*110, 0 );
  }
}
void mousePressed(){
  shuffleCard();
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week18/week18-4.png)
