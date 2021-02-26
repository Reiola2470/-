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
