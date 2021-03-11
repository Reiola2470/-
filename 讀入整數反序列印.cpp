#include <stdio.h>
int a[1000];
int main()
{
	int ans=0;
	for(int i=0;i<1000;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			ans=i;
			break;
		}
	}
	for(int i=ans-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
