# WEEK17
## week17-1
```C
void setup(){
   size(400,200);
   textSize(40);
}
String line="world";
void draw(){
   background(0);
   text("hello",100,100);
   text(   line,100,150);
}
```
## week17-2
```C
void setup(){
   size(400,200);
   textSize(40);
}
String line="";
String Q="hello";
void draw(){
   background(0);
   text("Q:  "+Q,100,100);
   text("You:"+line,100,150);
}
void mousePressed(){
   line=line+"a"; 
}
```
## week17-3
```C
void setup(){
   size(400,200);
   textSize(40);
}
String line="";
String Q="hello";
void draw(){
   background(0);
   text("Q:  "+Q,100,100);
   text("You:"+line,100,150);
}
void keyPressed(){
   line=line+key; 
}
```
## wwek17-4
