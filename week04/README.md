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
