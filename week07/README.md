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
