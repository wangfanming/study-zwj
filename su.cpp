#include<stdio.h>
void shai()
{
	int n,prime;
	for(int i=2;i<=n/2;i++)
	{
		if(n/i==0)
		{
			prime=1;
		}
		else 
		{
			prime=0;
		}
	}
}
int main()
{
    int n,prime	;
	scanf("%d",&n);
	if(prime==1)
	{printf("n是素数");
	}
	else
	{
		printf("n不是素数");
	}
	return 0;
}