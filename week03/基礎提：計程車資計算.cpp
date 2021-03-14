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
