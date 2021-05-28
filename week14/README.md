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
