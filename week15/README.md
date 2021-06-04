step1 複習倒數計時,second()秒鐘,textSize()字型大小,test()畫出字,setup()做一次,draw()每秒做60次
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
