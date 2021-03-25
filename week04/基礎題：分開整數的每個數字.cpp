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
