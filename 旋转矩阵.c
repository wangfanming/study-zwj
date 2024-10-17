#include<stdio.h>
int main(){
	int a[10][10];
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(j=3&&i<m){
				a[i][j]=a[i-1][j]+1;
			}
			if(i=3&&j<n){
				a[i][j]=a[i][j-1]+1;
			}
			if(j=0&&i<n){
				a[i][j]=a[i-1][j]+1;
			}
			if(i=0&&j<3){
				a[i][j]=a[i][j+1]+1;
			}
			else{
				a[1][1]=16;
				a[1][2]=13;
				a[2][1]=15;
				a[2][2]=14;
			}
		printf("%d ",a[i][j]);		
		}
		printf("\n ");
	}
	return 0;
}