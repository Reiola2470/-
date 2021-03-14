#include <stdio.h>
int main()
{
	int n;
	float avg;
	scanf("%d",&n);
	int a[100];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=(float)sum/n;
	printf("§¡¼Ð:%.1f\n",avg);
	int sumtop=0;
	float avgtop;
	int x=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=avg)
		{
			sumtop+=a[i];
			x++;
		}
	}
	avgtop=(float)sumtop/x;
	printf("«e¼Ð:%.1f\n",avgtop);
}
