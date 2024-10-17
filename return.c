#include<stdio.h>
int main()
{int x,y;
int ret=0;
 scanf("%d",&x);
 while(x>0)
 {
 	y=x%10;
 	ret=ret*10+y;
 	x/=10;
 }
 printf("%d",ret);
	return 0;
}
