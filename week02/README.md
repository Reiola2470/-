# WEEK02
## 讀入整數反序列印 
```C
#include <stdio.h>
int a[1000];
int main()
{
 int N=0;
 for(int i=0; i<1000; i++){
  scanf("%d",&a[i]);
  if(a[i]==0){
   N=i;
   break;
  }
 }
 
 for(int i=N-1; i>=0;i--){
  printf("%d ",a[i]);
 }
 printf("\n");
}
```
## A的B次方函數
```C
#include <stdio.h>
int MYPOWER (int a,int b)
{
 int ans=1;
 for(int i=b;i>=1;i--){
  ans=ans*a;
  }
  return ans;
 }


int main(void)
{
 int a,b;
 scanf("%d%d",&a,&b);
 printf("[%d]",MYPOWER(a,b));
 return 0;
}
```
## 漸增數列相加
```C
#include <stdio.h>
int main()
{
 int a, ans=0;
 scanf("%d",&a);
 for(int i=a;i>=1;i--){
  ans=(i-1)*i+ans;

  }
 
 printf("%d\n",ans);
}
```
## 判別正方形 
```C
#include <stdio.h>
int main()
{
 printf("Enter two numbers:  ");
 int a,b;
 scanf("%d%d",&a ,&b);
 if(a==b) printf("It is a square ");
 else printf("It is not a square ");
}
```
## 2進位轉10進位 
```C
#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int ans=0;
 ans=(n%10)*1;
 n=n/10;
 ans=(n%10)*2+ans;
 n=n/10;
 ans=(n%10)*4+ans;
 n=n/10;
 ans=(n%10)*8+ans;
 n=n/10;
 printf("%d\n",ans);
}
```
## 均標與前標計算
```C
#include <stdio.h>
int main()
{
 int N;
 scanf("%d",&N);
 
 int sum=0;
 int a[1000];
 for(int i=0;i<N;i++){
  scanf("%d",&a[i]);
  sum+=a[i];
  }
 float average;
 average=(float)sum/N;
 float r=0;
 float sumTop=0;
 for(int i=0;i<N;i++){
  if(a[i]>=average){
   sumTop+=a[i];
   r++;
   }
  }
 float averageTop;
 averageTop=(float)sumTop/r;
 printf("均標:%.1f\n",average);
 printf("前標:%.1f\n",averageTop);
}
```
