#include<stdio.h>
int main(){
	int temp,i,j,n;
	int a[1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}