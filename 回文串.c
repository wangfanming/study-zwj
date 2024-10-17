#include<stdio.h>
#include<string.h>
int check(char str[])
{

    int len = strlen(str);
    int l=0,r=0;
    for(l=0,r=len-1;l<r;r--,l++)
    {
    	
	  if(str[l]!=str[r])
	  {
	     return 0;
	 }
	}
	return 1;
}
int main()
{
	int n;
	char bi[1000];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",bi);
		if(check(bi))
		{
		 printf("YES\n");
		}
		else
		{
		  printf("NO\n");
		}
    }
	return 0;				
}