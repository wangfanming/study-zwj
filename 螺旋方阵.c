#include<stdio.h>
//int main(){
//	int i,j;
//	i=0;j=0;
//	int m,n;
//	int f=0;//向右
////	int cnt=1;
//	int a[m][n];
//	
////	while(1){
//		scanf("%d %d",&m,&n);
////		if(a[i][j]>n*m)
////		break;
//	    a[0][0]=1;
//		if(f==0){
//			for(i,j;j<n;j++){
//				a[i][j]=a[i][j-1];
//				printf("%d ",a[i][j]);	
//			}
//			printf("\n");
//			if((i==0&&j==n-1)||(i==1&&j==n-2)){
//				f=1;//向下
//			}
//		}
//		if(f==1){
//			for(i,j=n-1;i<m;i++){
//				a[i][j]=a[i-1][j]+1;
//					printf("%d ",a[i][j]);
//			}
//			printf("\n");
//			if((j==n-1&&i==m-1)||(i==m-2&&j==n-2)){
//				f=2;//向左
//			}
//		}
//		if(f==2){
//			for(j,i=m-1;i<n;j++){
//				a[i][j]=a[i][j+1]+1;
//			    printf("%d ",a[i][j]);
//			}
//			printf("\n");
//			if((j==0&&i==m-1)||(i==m-2&&j==1)){
//				f=3;//向上 
//			}
//		}
//		if(f==3){
//			for(i,j=0;i>0;i++){
//				a[i][j]=a[i+1][j]+1;
//		    	printf("%d ",a[i][j]);
//			}
//			printf("\n");
//			if(i==1&&j==0){
//				f=0;
//			}
//		}
//		printf("%d ",a[i][j]);
////	}
//	return 0;
//}


//给定一个正整数 n，生成一个包含 1 到 n^2 所有元素，且元素按顺时针顺序螺旋排列的正方形矩阵。

int main(){
	int n; //
	scanf("%d",&n);
	//几个圈 ？？
	int loop  = n / 2;
	//记录每个圈的起始位置 ？？？ x ? y  ?
	int x=0,y=0;
	int i,j;
	int mid = n/2;
	int ret = 1;
	int a[n][n];
	int count =1; //计数器
	//通过控制loop，来为每个圈赋值
	
	while(loop--){
		//原则：左闭右开
		i = x;
		j = y;
		//1、从左到右
		for(j; j < n-ret; j++){
			a[i][j]=count++;
		}
		//2、从上到下
		for(i; i < n-ret; i++){
			a[i][j]=count++;
		}
		//3、从右到左
		for(j; j > y; j--){
			a[i][j]=count++;
		}
		//4、从下到上
		for(i; i > x; i--){
			a[i][j]=count++;
		}
		//重新记录圈的起始位置x,y
		x++;
		y++;
		//改变每一行/每一列的长度
		ret++;
	}
	if(n%2){ // 在C/C++里边，0代表假（false） 1代表真 true
		a[mid][mid]=count;
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}

