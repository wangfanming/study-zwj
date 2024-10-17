#include<stdio.h>
void sum(int str,int ed)
{
	int sum=0;
	for(int i=str;i<=ed;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
//return sum;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	sum(a,b);
//	printf("%d",sum(a,b));
	return 0;
}