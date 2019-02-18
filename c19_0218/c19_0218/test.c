#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//第三个：Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222
//22222=2+20+200+2000+20000
     //=2+2*10^1+2*10^2+2*10^3+2*10^4
int CreatNum(int i, int num){
	int sn = 0;   //表示某一项的和
	if (num < 0 || num >= 10 || i <= 0){
		return 0;
	}
		for (int n = 1; n <= i; ++n){
			sn += num * pow(10, n - 1);
		}
	return sn;
}
int main(){
	int num = 2;

	int sum = 0;

	for (int i = 1; i <= 5; ++i){
		sum += CreatNum(i, num);
	}
	printf("sum=%d", sum);
	system("pause");
	return 0;
}
//第二个：求出0～999之间的所有“水仙花数”并输出。
//水仙花数是一个三位数
//百位数字 = 数字 / 100;
//十位数字=数字/10,然后再%10,
//个位数字=数字%100   153
//函数方法
//int IsShuiXian(int num){
//	if (num < 100 || num>999){
//		return 0;
//	}
//	else{
//		int hundred = num / 100;
//		int ten = (num / 10) % 10;
//		int one = num % 10;
//		if (num == pow(hundred, 3) + pow(ten, 3) + pow(one, 3)){
//			return ;
//		}
//	}
//	return 0;
//}
//int main(){
//	int i = 1;
//	for (; i <= 999; ++i){
//		if (IsShuiXian(i)==1){
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//普通方法
//int main(){
//	int i = 100;
//	for (; i <= 999; ++i){
//	   int hundred = i / 100;  //1      
//	   int ten = (i/10) % 10;   //5
//	   int one = i % 10;      //3
//	   if (i == pow(hundred, 3) + pow(ten, 3) + pow(one, 3)){
//		   printf("%d ", i);
//	   }
//	}
//	system("pause");
//	return 0;
//}
//第一个：在屏幕上打印出菱形
//两重循环：外循环是行循环，内循环是列循环
//对角线的一半是7行
//第一行6个空格，一个星
//第二行五个空格，三个星
//第三行四个空格，五个星
//所以第i行，有7-i个空格，2*i-1个星。
//void PrintLine(int blank_count,int star_count){
//	int i = 0;
//	for (; i < blank_count; ++i)
//		printf(" ");
//	for (i=0; i < star_count; ++i){
//		printf("*");
//	}
//	printf("\n");
//}
//void PrintLingXing(int n){
//	//打印上半部分
//	int i = 1;
//	for (i = 1; i < n; ++i){
//		PrintLine(n-i,2*i-1);
//	}
//	//打印中间部分
//	PrintLine(0, 2 * n - 1);
//	//打印下半部分
//	for (i = n - 1; i > 0; --i){
//		PrintLine(n - i, 2 * i - 1);
//	}
//}
//int main(){
//	PrintLingXing(7);
//	system("pause");
//	return 0;
//}