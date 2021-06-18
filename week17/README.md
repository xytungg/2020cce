# 第17週 程式(正課)
## step1-1 利用String line宣告一個字串變數,變數可以變動,所以在程式很重要, 再用text()畫出字
```
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="world";
void draw(){//每秒60次
  background(23, 94, 32);
  text( "hello", 100, 100);
  text( line , 100, 150);
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week17/week17-1.1.png)
## step1-2 利用字串的+可以把2個字串接起來變比較長的字串,同時在mousePressed()裡,line=line+新的字母,也能變長
```
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q = "hello";
void draw(){//每秒60次
  background(23, 94, 32);
  text( "Q", 100, 100);
  text( "You:"+line , 100, 150);
}
void mousePressed(){
  line =line + "a"; 
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week17/week17-1.2.png)
## step2-1 延序前一步驟,但把mousePressed()改成keyPressed(), 同時 line = line + key; 讓按的字母可以變長
```
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q = "hello";
void draw(){//每秒60次
  background(23, 94, 32);
  text( "Q: "+Q,     100, 100);
  text( "A: "+line , 100, 150);
}
void keyPressed(){
  line =line + key; 
}
```
![image](https://raw.githubusercontent.com/xytungg/2020cce/gh-pages/week17/week17-2.1.png)
## step2-2
![image]()
