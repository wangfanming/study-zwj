#include<stdio.h>
int main(){
	int n,m;
	int a,b,c,d;
	while(1){
		scanf("%d",&n);
		if(n == 0) break;
		a=n/100;
		d=n/10;
		b=d%10;
		c=n%10;
		if(n==a*a*a+b*b*b+c*c*c){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}