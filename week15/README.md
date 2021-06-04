# 第15週 程式(正課)
## step1 複習倒數計時 second()秒鐘 textSize()字型大小 test()畫出字 setup()做一次 draw()每秒做60次
```c
void setup(){//設定 只做一次
  size(400,200);
  textSize(40);//字型大小
}
void draw(){//畫圖 每秒60次
  background( 23, 94, 32);
  int s = second();//秒
  text(s , 100, 100);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week15/week15-1.png)
## step2 倒數計時 利用餘數及減法 來做出9到0的倒數計時
```c
//倒數: 9, 8, 7......0
void setup(){//設定 只做一次
  size(400,200);
  textSize(40);//字型大小
}
void draw(){//畫圖 每秒60次
  background( 23, 94, 32);
  int s = second();//秒鐘
  //text(59-s , 100, 100);
  text(9-s%10, 100, 100);
}
// 原:  0, 1, 2, 3, 4, 5, 6, 7, 8, 9
//倒數: 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week15/week15-2.png)
