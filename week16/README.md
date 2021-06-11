# WEEK16
## week16-2
```C
void setup(){
  size(400,200);
}
void draw(){
  background(148,125,157);
  fill(255);
  ellipse(100,100,180,180);
  fill(255,0,0);
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}
```
## week16-3
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
int degree=0;
void draw(){
  background(148,125,157);
  arc(100,100,180,180,radians(90),radians(180));
}
```
## week16-4
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0;
void draw(){
  background(148,125,157);
  //float start=radians(90+mouseX);
  //float stop=radians(180+mouseX);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  shift+=1;
}
```
## week16-5
