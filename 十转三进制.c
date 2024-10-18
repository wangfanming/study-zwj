#include<stdio.h>
int main(){
	int n,i;
	int a[100005];
	int cnt;
	while(scanf("%d",&n)!=EOF)
	{
		cnt = 0;
		while(n)
		{
			a[++cnt]=n%3;
			n/=3;
		}
		for(i=cnt;i>=1;i--)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}