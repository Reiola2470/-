#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=n;i>=1;i--)
	{
		ans=(i-1)*i+ans;
	}
	printf("%d\n",ans);
}
