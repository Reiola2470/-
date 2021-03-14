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
## 基礎題：計算幾週與幾天
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7,n%7);
}
```
## 基礎題：計程車資計算
```C
#include <stdio.h>
int main()
{
	int n,a;
	int ans=0,i=0;
	scanf("%d",&n);
	if(n>2000)
	{
		a=100;
		i++;
		if(i>=1)
		{
			a+=5;
		}
		ans=((n-2000)/500)*5+a;
		printf("%d\n",ans);
	}
	else printf("%d\n",100);
}
```
## 基礎題：兩數間可被5整除的整數
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		c=a;
		a=b;
		b=c;
	}
	for(int i=a;i<=b;i++)
	{
		if(i%5==0)printf("%d\n",i);
	}
}
```
## 基礎題：整數間最大距離
```C
#include <stdio.h>
int a[10000];
int main()
{
	int min,max;
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		min=a[0];
		max=a[i];
	}
	for(int i=0;i<3;i++)
	{
		if(min>a[i])min=a[i];
		if(max<a[i])max=a[i];
	}
	printf("%d\n",max-min);
}
```
## 進階題：計算陣列的平方值
```C
#include <stdio.h>
int a[10];
int b[100];
int main()
{
	int n;
	scanf("%d",&n);
	int ans=1;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans=a[i]*a[i];
		printf("%d,",ans);
	}
	printf("\n");
}
```
## 進階題：大小寫轉換
```C
#include <stdio.h>
int main()
{
	char input[11];
	scanf("%s",&input);
	for(int i=0;i<11;i++)
	{
		if('A'<=input[i]&&input[i]<='Z') printf("%c",input[i]+32);
		else if('a'<=input[i]&&input[i]<='z')printf("%c",input[i]-32);
		else if('0'<=input[i]&&input[i]<='9')printf("%c",input[i]);
		else if(input[i]==NULL)break;
	}
	printf("\n");
}
```
