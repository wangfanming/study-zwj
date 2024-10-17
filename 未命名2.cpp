#include<stdio.h>
#include<math.h>
int ai[1009];
int bi[1009];

void IsPrime() {
	//bi[1] = 1
	//bi[2] = 0
	//bi[3] = 0
	bi[0] = 1;
	bi[1] = 1;
	for(int i = 2; i <= 1000; i ++) 
	{
		if(bi[i] == 0) 
		{
			for(int j = i + i; j <= 1000; j = j+i) 
			{
				bi[j] = 1;
			}
		}
	}
}

int main() {
	IsPrime();
	int t;
	scanf("%d", &t);
	while(t --) {
		int n;
		scanf("%d", &n);
		for(int i = 1; i <= n; i ++) {
			scanf("%d", &ai[i]);
		}
		int sum = 0;
		for(int i = 1; i <= n; i ++) {
			if(bi[ai[i]] == 0) {
				sum += ai[i];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}