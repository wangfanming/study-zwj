#include<stdio.h>
int main()
{
	int i,j;
	int a[10][10];
	for(i=0;i<10;i++) // i: 行索引
	{
		for(j=0;j<=i;j++)// j: 列索引
		{
	
			if(i==j||j==0)
			{
				a[i][j]=1;
			} else {
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
		}
    }
    for(i=0;i<10;i++)
    {
		for(j=0;j<=i;j++)
		{
			printf("%d\t",a[i][j]);
	    }
	    printf("\n");
    }
	return 0;
}