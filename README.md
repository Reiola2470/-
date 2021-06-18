# WEEK01

## 找零錢
```C
#include <stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/50;
	b=n%50/5;
	c=n%50%5;
	printf("%d=50*%d+5*%d+1*%d\n",n,a,b,c);
}
```
## 因數個數
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
		a++;
		}
	}
	printf("%d\n",a);
}
```
## 找倍數
```C
#include <stdio.h>
int main()
{
	int a[10],n=10;
	int ans=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[10]);
		if(a[10]%3==0){
			ans++;
		}
	}
	printf("%d\n",ans);
}
```
## 整數轉換成等級
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90){
		printf("A\n");
	}
	else if(n<90 && n>=80){
		printf("B\n");
	}
	else if(n<80 && n>=60){
		printf("C\n");
	}
	else if (n<60)
	printf("F\n");
}
```
## 分式化簡
```C
#include <stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        for(int i=1;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                temp=i;
            }
        }
    }
    if(b>a)
    {
        for(int i=1;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
            {
                temp=i;
            }
        }
    }
    a=a/temp;
    b=b/temp;
    printf("%d\n%d",a,b);
}
```
# WEEK02
## 讀入整數反序列印 
```C
#include <stdio.h>
int a[1000];
int main()
{
 int N=0;
 for(int i=0; i<1000; i++){
  scanf("%d",&a[i]);
  if(a[i]==0){
   N=i;
   break;
  }
 }
 
 for(int i=N-1; i>=0;i--){
  printf("%d ",a[i]);
 }
 printf("\n");
}
```
## A的B次方函數
```C
#include <stdio.h>
int MYPOWER (int a,int b)
{
 int ans=1;
 for(int i=b;i>=1;i--){
  ans=ans*a;
  }
  return ans;
 }


int main(void)
{
 int a,b;
 scanf("%d%d",&a,&b);
 printf("[%d]",MYPOWER(a,b));
 return 0;
}
```
## 漸增數列相加
```C
#include <stdio.h>
int main()
{
 int a, ans=0;
 scanf("%d",&a);
 for(int i=a;i>=1;i--){
  ans=(i-1)*i+ans;

  }
 
 printf("%d\n",ans);
}
```
## 判別正方形 
```C
#include <stdio.h>
int main()
{
 printf("Enter two numbers:  ");
 int a,b;
 scanf("%d%d",&a ,&b);
 if(a==b) printf("It is a square ");
 else printf("It is not a square ");
}
```
## 2進位轉10進位 
```C
#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int ans=0;
 ans=(n%10)*1;
 n=n/10;
 ans=(n%10)*2+ans;
 n=n/10;
 ans=(n%10)*4+ans;
 n=n/10;
 ans=(n%10)*8+ans;
 n=n/10;
 printf("%d\n",ans);
}
```
## 均標與前標計算
```C
#include <stdio.h>
int main()
{
 int N;
 scanf("%d",&N);
 
 int sum=0;
 int a[1000];
 for(int i=0;i<N;i++){
  scanf("%d",&a[i]);
  sum+=a[i];
  }
 float average;
 average=(float)sum/N;
 float r=0;
 float sumTop=0;
 for(int i=0;i<N;i++){
  if(a[i]>=average){
   sumTop+=a[i];
   r++;
   }
  }
 float averageTop;
 averageTop=(float)sumTop/r;
 printf("均標:%.1f\n",average);
 printf("前標:%.1f\n",averageTop);
}
```
# WEEK03
## week03-1
```C
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p = & a[2];
    *p = 222;
    p = p+2;
    *p = 666;
}
```
## week03-2
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printall()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = & a[2];
    *p = 222;
            printAll();
    p = p+2;
    *p = 666;
            printAll();
    p--;
    *p = 555;
            printAll();
}
```
## week03-3
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printall()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = & a[2];
    *p = 222;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
    p = p+2;
    *p = 666;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
    p--;
    *p = 555;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
}
```
## week03-4
```C
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p= (int*) malloc(sizeof(int)*10);
    return 0;
}
```
# WEEK04
## week04-1
```C
#include <stdio.h>
struct POINT {
    float x,y;
};
int main()
{
    struct POINT a;
}
```
## week04-2
```C
#include <stdio.h>
struct POINT {
    float x,y;
};
int main()
{
    struct POINT a = {4.1, 3.2};
    printf("%f %f\n",a.x,a.y);
}
```
## week04-3
```C
#include <stdio.h>
struct POINT {
    float x,y;
};
int main()
{
    struct POINT a = {4.1, 3.2};
    printf("%f %f\n",a.x,a.y);
    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    return 0;
}
```
## week04-4
```C
#include <stdio.h>
struct DATA {
    int x,y;
}a[3];
struct DATA b={100,200};
int main()
{
    for(int i=0;i<3;i++)
    {
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);
    struct DATA c ;
    printf("c: %d %d 像亂碼\n",c.x,c.y);
    c=b;
    printf("c: %d %d\n",c.x,c.y);
}
```
## week04-5
```C
#include <stdio.h>
struct POINT {
    float x,y,z;
};

struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};
int main()
{
    struct POINT *p = &point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
}
```
## 進階題：除惡務盡
```C
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]!='2')
		{
			printf("%c",a[i]);
		}
		i++;
	}
	printf("\n");
}
```
## 進階題：擲骰統計
```C
#include <stdio.h>
char a[999];
int main()
{
	char count[7]={0};
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		count[a[i]-'0']++;
		i++;
	}
	for(int i=1;i<=6;i++)
	{
		printf("%d:%d\n",i,count[i]);
	}
}
```
## 進階題：函數找整數的最大數字
```C
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max;
	max=n%10;
	while(n>0)
	{
		if((n%10)>max)max=n%10;
		n/=10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
```
## 進階題：星星等腰三角
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<(n-i);j++)
			printf(" ");
		for(int j=0;j<(i*2-1);j++)
			printf("*");
		printf("\n");
	}
}
```
## 基礎題：分開整數的每個數字
```C
#include <stdio.h>
int a[5];
int main()
{
	int n;
	scanf("%d",&n);
	a[4]=n%10;
	a[3]=n/10%10;
	a[2]=n/100%10;
	a[1]=n/1000%10;
	a[0]=n/10000;
	for(int i=0;i<4;i++)
	{
		printf("%d   ",a[i]);
	}
	printf("%d",a[4]);
}
```
## 基礎題：字元判別
```C
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>='A' && a<='Z')printf("U");
	else if(a>='a' && a<='z')printf("L");
	else if(a>='1' && a<='9')printf("D");
	else printf("O");
}
```
## 基礎題：數字之首
```C
#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	printf("%c",c);
}
```
## 基礎題：輸出從0到N的偶數
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
```
# WEEK05
## week05-1
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);
}
```
## week05-2
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("你看看你看看,現在印出來的line4: ==%s==\n",line4);
}
```
## week05-3
```C
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};

    for(int i=0;i<5;i++)
    {
        printf("%s\n",line[i]);
    }
}
```
## week05-4
```C
#include <stdio.h>
int main()
{
    printf("請看看值是多少: %d",'\0');
}
```
## week05-5
```C
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if( strcmp( line, line2) > 0){
        printf("左邊大\n");
    }else{
        printf("右邊大\n");
    }
}
```
## 字串排序
```C
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if( strcmp(line[i],line[j])>0){
				strcpy(temp,line[i]);
				strcpy(line[i], line[j]);
				strcpy(line[j], temp);
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}
}
```
# WEEK07
## 字串排序(qsort)
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10];
int compare(const void *p1,const void *p2)
{
	char *s1 = (char*)p1;
	char *s2 = (char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&line[i]);
	}
	
	qsort(line,n,10,compare);
	
	for(int i=0;i<n;i++){
		printf("%s\n",line[i]);
	}
}
```
## UVA-10420
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char other[100];
int compare(const void *p1,const void *p2)
{
	char *s1 = (char*)p1;
	char *s2 = (char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int ans=1;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
		gets(other);
	}
	qsort(line,n,10,compare);
	for(int i=0;i<n;i++){
		if( strcmp(line[i],line[i+1])==0){
			ans++;
		}
		else{
			printf("%s %d\n",line[i],ans);
			ans=1;
		}
	}
}
```
# WEEK08
## week08-7
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000] [32];
int compare (const void *p1,const void *p2){
	return strcmp((char* )p1,(char*)p2);
}	
int main()
{
	int T;
	scanf("%d\n\n",&T);
	int N=0;
	for(int i=0;    ;i++){
		char*now=gets(tree[i]);
		if(now==NULL){
			N=i;
			break;
		}
		if(strcmp( tree[i],"")==0){
			N=i;
			break;      
		}	
	}
	qsort (tree ,N,32,compare);
	printf("%s ",tree[0]);
	int ans=1;
	for(int i=0;i<N-1;i++){
	if(strcmp (tree[i],tree[i+1])!=0){
		printf("%.4f\n",100*ans/(float)N);
		printf("%s ",tree[i+1]);
		ans=1;
		}else ans++;
	}
	printf("%.4f\n",100*ans/(float)N);
}
```
# WEEK10
## week10-1
```C
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			
			printf("%s\n",line);
		}
		printf("=====分隔線=====\n");
	}
}
```
## week10-2
```C
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			
			//printf("%s\n",line);
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		printf("=====分隔線=====\n");
	}
}
```
## week10-3
```C
#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][32];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			
			strcpy( tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		
		for(int i=0;i<N;i++){
			printf("%s\n",tree[i]);
		}
		
		printf("=====分隔線=====\n");
	}
}
```
## week10-4
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void *p1,const void *p2)
{
	return strcmp( (char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			
			strcpy( tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		printf("有幾棵樹? %d\n",N);
		
		qsort(tree,N,32,compare);
		
		for(int i=0;i<N;i++){
			printf("%s\n",tree[i]);
		}
		
		printf("=====分隔線=====\n");
	}
}
## week10-5
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void *p1,const void *p2)
{
	return strcmp( (char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			
			strcpy( tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		//printf("有幾棵樹? %d\n",N);
		
		qsort(tree,N,32,compare);
		
		int ans=1;
		printf("%s ",tree[0]);
		
		for(int i=0;i<N;i++){
			if( strcmp(tree[i],tree[i+1])==0){
				ans++;
			}else{
				printf("%d\n",ans);
				ans=1;
				printf("%s ",tree[i+1]);
			}
			//printf("%s\n",tree[i]);
		}
		//printf("=====分隔線=====\n");
	}
}
```
## week10-6
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void *p1,const void *p2)
{
	return strcmp( (char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0)break;
			
			strcpy( tree[N],line);
			//printf("%s\n",line);
			N++;
		}
		//printf("有幾棵樹? %d\n",N);
		
		qsort(tree,N,32,compare);
		
		if(t>0) printf("\n");
		int ans=1;
		printf("%s ",tree[0]);
		
		for(int i=0;i<N-1;i++){
			if( strcmp(tree[i],tree[i+1])==0){
				ans++;
			}else{
				printf("%.4f\n",100*ans/(float)N);
				ans=1;
				printf("%s ",tree[i+1]);
			}
			//printf("%s\n",tree[i]);
		}
		printf("%.4f\n",100*ans/(float)N);
	}
}
```
# WEEK11
## week11

# WEEK12
## week12

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
```C
void setup(){
  size(1024, 400);
}
void draw(){
  if(mousePressed)background(15, 162, 249);
  else background(250, 241, 255);
  textSize(50);
  text(a,100,100);
}
int a=0;
void mousePressed(){
  a++;
}
```
# WEEK14
## week14
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
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"bell.mp3");
}
void draw(){
  background(#792626);
}
void mousePressed(){
  if(player.isPlaying()){
    player.stop(); 
  }else{
   player.play(); 
  }
}
```
## week15-6
```C
function setup(){ //設定 只做一次
  createCanvas(400,200);
  textSize(40); //字型大小
}

function draw(){
  background(121,38,38);
  let s = second(); // 秒鐘
  text(s,100,100);
}
```
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
## wwek17-5
```C
void setup(){
   size(400,200);
   textSize(40);
}
String line="";
String Q="hello";
void draw(){
   background(0);
   int len = line.length();text(len,100,50);
   text("Q:  "+Q,100,100);
   text("A:"+line,100,150);
}
void keyPressed(){
  int len=line.length();
   if(key>='a'&&key<='z')line = line + key;
   if(key>='A'&&key<='Z')line = line + key;
   if(key == BACKSPACE && len>0)line = line.substring(0,len-1);
}
```
## week17-6
```C

```

