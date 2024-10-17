//基础语法：
//  双斜线这种是单行注释
/* 我是多行注释 */
//测试样例
#include<stdio.h>
int main(){
	//根据输入的体重，计算对应的白金价值。 这个就是程序的目的。
	/*用数学表达就是，给定一个体重 x,使用程序自动给出对应的白金价值y。
	计算公式：y = 14.5833 * x
	程序的主体就是这个计算公式
	*/
	float weight;  //float 表示体重x的数据类型为单精度浮点型，具体能表示的范围
	float value;
	printf("输入体重x: ");
	scanf("%f",&weight);
	value = 14.5833 * weight;
	printf("体重x:%f ,对应的白金价值为： %.2f",weight,value);
	return 0;
}
