#include<stdio.h>
int gcd(int a,int b)
{
	if(a%b==0)
	return b;
	return gcd(b,a%b);
}
int main()
{
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d",gcd(A,B));
	return 0;
}