#include<stdio.h>
int a[1001000];
int main()
{
	int n,m,b,i;

	scanf("%d",&n);
	for(int i = 1; i <= n; i++) {
		scanf("%d",&a[i]);
	}
	//int l=1,r=n;
	
	scanf("%d",&m);
	while(m--)
	{
		int l=1,r=n;
		scanf("%d",&b);
		while(l<r)
		{
			int mid=(l+r)/2; 
			if(a[mid]>=b)
			{
			  r=mid;
		    }
			else
			{
			  l=mid+1;
		    }
		}
		if(b==a[l])
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