#include<stdio.h>
int main(){
	int x;
	int cnt=0;
	double sum=0;
	int ai[10];
	scanf("%d",&x);
		while(x!=-1){
			ai[cnt]=x;
			sum+=x;
			cnt++;
		}
	if(cnt>0){
	printf("%f",sum/cnt);
	for()
	}
	return 0;	
}