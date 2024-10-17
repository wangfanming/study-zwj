#include<stdio.h>
int main(){
	int t;
	int ret=0;
	char ch[4];
	scanf("%d",&t);
	while(t--){
	    scanf("%s",ch);
				if(ch[0]=='y'||ch[0]=='Y'){
					ret++;
				}
				 if(ch[1]=='e'||ch[1]=='E'){
				    ret++;
				}
				if(ch[2]=='s'||ch[2]=='S') {
					ret++;
				}
				else{
					ret=0;
				}	
		
			if( ret==3){
			    printf("YES\n");	
			}
			else{
			    printf("NO\n");
			}
	}
	return 0;
}