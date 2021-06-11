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
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0, v=10;
void draw(){
  background(148,125,157);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.0001){
     shift +=v;
     v=v*0.99;
  }
  text(shift,200,100);
  text(v,200,150);
}
```
## week16-6
```C
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0, v=0;
void mousePressed(){
   v=random(10)+5; 
}
void draw(){
  background(148,125,157);
  for(int i=0;i<24;i++){
    if(i%3==0)fill(0);
    if(i%3==1)fill(255);
    if(i%3==2)fill(200,180,0);
    float start=radians(0+shift+i*360/24);
    float stop=radians(360/24+shift+i*360/24);
    arc(100,100,180,180,start,stop);
    }
  if(v>0.1){
     shift +=v;
     v=v*0.99;
    }
  text(shift,200,100);
  text(v,200,150);
}
