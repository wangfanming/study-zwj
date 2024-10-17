#include<stdio.h>
int main(){
	int i,n;
	int m=1;
	scanf("%d",&i);
	while(i--){
		scanf("%d",&n);
		for(m=1;m<n&&m%2!=0;m+=2){
//			if(m%2!=0){
				printf("%d ",&m);
			}

			printf("\n");
		for(m=1;m<=n&&m%2==0;m+=1){
//			if(m%2==0){
				printf("%d ",&m);
//			}
	    }

    }
    return 0;
}