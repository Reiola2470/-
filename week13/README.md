# WEEK13
## week13
```C
void draw(){
  background(15,162,249);
  textSize(50);
  int h=hour();
  int m=minute();
  int s=second();
  text("Now:" + h + ":" + m + ":"+s,100,100);
  int total = h*60*60+m*60+s;
  int total2=12*60*60+0*60+0;
  text("總秒數:"+total,100,200);
  int ans = total2-total;
  int hh=ans/60/60%60,mm=ans/60,ss=ans%60;
  text("還剩下:"+hh+":"+mm+":"+ss,100,300);
}
```
