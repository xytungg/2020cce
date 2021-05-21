## 第13週
### 互動程式設計 (遊戲、工具)—倒數計時器
#### step1 開啟Processing,使用size()還有background()開出有背景色的窗,可用小畫家編輯色彩
```c
size(1024, 400);
background( 0, 66, 0);
```
#### step2 互做mousePressed的互動,先有void setup()及 void draw(),再用if(mousePressed) 及else來切換
```c
void setup(){//只做一次設定
  size(1024, 400);
}
void draw(){//每秒狂做60次
  if(mousePressed) background(9, 75, 130);
  else background( 0, 66, 0);
}
```
#### step3 用textSize()調字大小,text()畫出字,void mousePressed()做按下去的動作
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
