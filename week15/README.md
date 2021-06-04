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
## step3 Sound播出聲音 要先用Sketch-Library-Add Library加入Sound 接下來照著老師hackmd的教學 剪貼程式碼 再把mp3檔放進去PDE寫程式的地方
```c
//發出聲音, 有點難, 要用外掛Processing的Sound
//這裡叫 PDE: Processing Developing Environment
import processing.sound.*;
SoundFile player;//SoundFile是形狀, player變名
//tada. mp3, 也可以拉進來這裡
void setup(){//設定 只做一次
  size(400,200);
  player = new SoundFile(this , "tada. mp3");
}
void draw(){//畫圖 每秒60次
  background( 23, 94, 32);
}
void mousePresseed(){
   player.play(); 
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week15/week15-3.png)
## step4 把第01,02,03合併 以step02為主 插入step03的宣告、初始化、play播放 但每秒播60次 很吵
```c
//從第2步的程式開始增加!
import processing.sound.*;
SoundFile player;
void setup(){//設定 只做一次
  size(400,200);
  textSize(40);
  player = new SoundFile(this, "tada.mp3");
}
void draw(){//畫圖 每秒60次
  background( 23, 94, 32);
  int s = second();//秒鐘
  //text(59-s , 100, 100);
  text(9-s%10, 100, 100);
  if(9-s%10 == 0 ) player.play();
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week15/week15-4.png)
## step5 要有更好的聲音播放,所以if( player.isPlaying() )時,要stop(), 否則 play(), 記得要放bell 換bell mp3哦
```c
import processing.sound.*;
SoundFile player;
void setup(){//設定 只做一次
  size(400,200);
  player = new SoundFile(this, "bell.mp3");
}
void draw(){//畫圖 每秒60次
  background( 23, 94, 32);
}
void mousePressed(){
  if(player.isPlaying() ){
  player.stop();
  }else{
  player.play(); 
  }
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week15/week15-5.png)
## step6 開新程式 切換成p5 js模式 利用 MaKey教授的網頁 將processing to p5 js converter轉換 貼上 執行 就會開網頁
```c
function setup(){//設定 只做一次
  createCanvas(400,200);
  textSize(40);
}
function draw(){//畫圖 每秒60次
  background( 23, 94, 32);
  let s = second();//秒鐘
  text(s, 100, 100);
}//任務 step2 (思考)倒數
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week15/week15-6.png)
