# WEEK15
## week15-1
```C
void setup(){ //設定 只做一次
  size(400,200);
  textSize(40); //字型大小
}

void draw(){
  background(#792626);
  int s = second(); // 秒鐘
  text(s,100,100);
}
```
## week15-2
```C
void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(41,109,207);
  int s= second();
  text(9-s%10,100,100);
}
```
## week15-3
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"tada.mp3");
}
void draw(){
  background(#792626);
}
void mousePressed(){
  player.play(); 
}
```
## week15-4
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"tada.mp3");
}
void draw(){
  background(#792626);
  int s =second();
  text(9-s%10,100,100);
  if(9-s%10==0)player.play();
}
```
## week15-5
