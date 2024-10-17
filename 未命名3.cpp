#include<stdio.h>
#include<string.h>
int check(char str[])
{
	int len=strlen(str);
	int l=0;
	int r=len-1;
	for(l;l<r;l++,r--)
	{
		if(str[l]!=str[r])
		return 0;
	}
	return 1;
}
int main()
{
    char b[]="qeq";
	if(check(b))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}