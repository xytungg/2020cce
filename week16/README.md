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
## step2
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
## step3
```c
```
![image]()



