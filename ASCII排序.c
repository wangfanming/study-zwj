#include<stdio.h>
//char arr[10];
int main()
{
	//int N;
	//scanf("%d",&N);
	char a,b,c;
	//while(N--)
	
	 //scanf("%s",arr);
	 if(a<b&&a<c)
	 {
	 	printf("a");
	 	if(b<c)
	 	{
	 		printf("b");
	 		printf("c");
		 }
		 else 
		 {
			 printf("c");
			 printf("b");
	     }
	 }
	  if(b<a&&b<c)
	 {
	 	printf("b");
	 	if(a<c)
	 	{
	 		printf("a");
	 		printf("c");
		 }
		 else 
		 {
			 printf("c");
			 printf("a");
		 }
	 }
	 if(c<a&&c<b)
	{
		printf("c");
		if(a<b)
		{
		 printf("a");
		 printf("b");
		}
		else
		{
			printf("b");
			printf("a");
		}
	
	printf("%c%c%c");
    return 0;
}