#include<stdio.h>
#include<string.h>
int main(){
	char a[]="hello";
	char b[]="lucy";
	char c[]="hello";
	//strcat(a,b);
	//printf("%s\n",a);
	//printf("%s",b);
	int len1=strcmp(a,b),len2=strcmp(a,c);
	printf("%d\n",len1);
	printf("%d\n",len2);
	return 0;
}