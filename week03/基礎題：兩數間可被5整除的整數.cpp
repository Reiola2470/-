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
