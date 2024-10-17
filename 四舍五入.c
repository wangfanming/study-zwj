#include<stdio.h>
int main()
{
	float x,m;
	int y,ret;
	scanf("%f",&x);
	ret=(int)x;
	m=x-ret;
	if(m<0.5)
	{
		y=ret;
	}
	else
	{
		y=ret+1;
	}
	printf("%d",y);
	return 0;
}