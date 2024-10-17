#include<stdio.h>
int main()
{
	int a,b,c;
scanf("输入%d,%d",&a,b);
printf("输出%d,%d",a,b);
if(a+b>10){
c=a*b;
printf("输出%d",c);
}
else
{
c=a-b;
printf("输出%d",c);
}
return 0;
}