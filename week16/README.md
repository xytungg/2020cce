# 第16週 程式(實習課)
## 第1題
## 第2題
## 第3題
## 第4題
## 第5題


# 第16週 程式(正課)
## step1 利用ellipse()畫出圓形,設定圓心,寬,高,再利用void setup()設定size()大小,在draw()有background(RGB三色)
```c
void setup(){//設定,每秒60次
  size(400, 200);
}
void draw(){//畫,每秒60次
  background(23, 94, 32);//RGB
  ellipse(50, 50, 80, 80);
}//      畫圖 圓心 寬  高
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week16/week16-1.png)
## step2 使用arc()來畫圓弧,參數和ellipse很像,圓心,寬,高,後面start,stop利mouseX除50.0 來輔助了解PI 3.14 就是半圓,換了色彩才看得清楚
```c
void setup(){//設定,每秒60次
  size(400, 200);
}
void draw(){//畫,每秒60次
  background(23, 94, 32);//RGB
  fill(255);//白
  ellipse(100, 100, 180, 180);
 //      畫圖 圓心 寬  高
  fill(255, 0, 0);//紅
  float stop=mouseX/50.0;
  text(stop, 200, 100);
  arc(100, 100, 180, 180, 0, stop);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week16/week16-2.png)
## step3 老師解釋 度degrees 及 弧度radians 的差別, 並且改用 radians()函式,來幫助你理解 start 和 stop 代表開始角度、結束角度 
```c
void setup(){
  size(400, 200);
  fill(250, 0, 0);
  textSize(40);
}
void draw(){
  background(23, 94, 32);
  arc(100, 100, 180, 180, radians(90), radians(180));
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week16/week16-3.png)
## step4 了解arc()裡的start,stop要用radians單位後,我們利用 shift移動量的變數,讓它每秒轉動60度,利用radians()換算角度
```c
void setup(){
  size(400, 200);
  fill(250, 0, 0);
  textSize(40);
}
float shift=0;
void draw(){
  background(23, 94, 32);
  //float start = radians(90+mouseX);
  //float stop = radians(180+mouseX);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  arc(100, 100, 180, 180, start, stop);
  shift+=1;
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week16/week16-4.png)
## step5
```c
void setup(){
  size(400, 200);
  fill(250, 0, 0);
  textSize(40);
}
float shift=0, v=10;//一開始速度10
void draw(){
  background(23, 94, 32);
  //float start = radians(90+mouseX);
  //float stop = radians(180+mouseX);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  arc(100, 100, 180, 180, start, stop);
  if(v>0.0001){//還有速度時,就轉動
    shift+=v;//轉動的速度
    v = v * 0.99;//速度會慢慢減速
    }
    text(shift, 200, 100);//印出shift
    text(v, 200, 150);//印出轉動的速度
}
```
![image](https://github.com/xytungg/2020cce/blob/gh-pages/week16/week16-5.png)
## step6
```c

```
![image]()



