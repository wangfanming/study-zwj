
#include<stdio.h>
#include<string.h>
int check(char str[])
{
    int len = strlen(str);
    int l,r;
    int N;
    scanf("%d",&N);
    while(N--)
    {
	    for( l,r=len-1;l<r;r--,l++);
	    {
		  if(str[l]!=str[r])
		  return 0;
		}
		return 1;
    }
}
int main(void)
{
	char b[]; 
	if( check(b))
	{
	 printf("YES");
	}
	else
	{
	  printf("NO");
	}
	return 0;				
}
