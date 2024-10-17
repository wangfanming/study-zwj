#include<stdio.h>
int main(){
	float pi=3.14f;
	float x;
	float area;
	printf("输入半径x:");
	scanf("%f",&x);
	
	area=x*x*pi;
    printf("半径x:%f,面积:%.2f",x,area);
	return 0;
}  