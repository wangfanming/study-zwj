#include<stdio.h>
int main(){
	int arr[10];
	int i;
	int max=0,min=10000;
	for(i=0;i<=4;i++){
			scanf("%d ",&arr[i]);
			if(arr[i]>max){
				max=arr[i];
		}
		if(arr[i]<min){
				min=arr[i];
		}
	}
	printf("%d %d",min,max);
    return 0;
}