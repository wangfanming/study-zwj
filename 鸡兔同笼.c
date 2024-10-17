#include<stdio.h>
int main()
{
	int i,j,n,m,l;
	int a;
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d %d",&n,&m);
		i=n*4;
		l=(i-m)/2;
		j=(i-m)%2;
		if(j==0)
		{
			printf("%d ",l);
			printf("%d\n",n-l);
		}
		else
		{
		  printf("No answer\n");
	    }
	}
	return 0;
}