#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char c[n][3];
	for(int i=0;i<n;i++){ // i是 行索引 变量
		getchar(); /*吃掉回车*/
		scanf("%c%c%c",&c[i][0],&c[i][1],&c[i][2]);
		char tmp;
		if(c[i][0] > c[i][1]){
			tmp = c[i][0];
			c[i][0] = c[i][1];
			c[i][1] = tmp;
		}
		if(c[i][1] > c[i][2]){
			tmp = c[i][1];
			c[i][1] = c[i][2];
			c[i][2] = tmp;
		}
		if(c[i][0] > c[i][1]) {  // 再次检查第一个和第二个
            tmp = c[i][0];
            c[i][0] = c[i][1];
            c[i][1] = tmp;
        }
//        q w e
//        q w
//        e w
//        q e w
	}
	for(int i=0;i<n;i++){
		printf("%c %c %c\n",c[i][0],c[i][1],c[i][2]);
	}
	
	return 0;
}