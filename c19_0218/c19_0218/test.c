#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//��������Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2+22+222+2222+22222
//22222=2+20+200+2000+20000
     //=2+2*10^1+2*10^2+2*10^3+2*10^4
int CreatNum(int i, int num){
	int sn = 0;   //��ʾĳһ��ĺ�
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
//�ڶ��������0��999֮������С�ˮ�ɻ������������
//ˮ�ɻ�����һ����λ��
//��λ���� = ���� / 100;
//ʮλ����=����/10,Ȼ����%10,
//��λ����=����%100   153
//��������
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
//��ͨ����
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
//��һ��������Ļ�ϴ�ӡ������
//����ѭ������ѭ������ѭ������ѭ������ѭ��
//�Խ��ߵ�һ����7��
//��һ��6���ո�һ����
//�ڶ�������ո�������
//�������ĸ��ո������
//���Ե�i�У���7-i���ո�2*i-1���ǡ�
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
//	//��ӡ�ϰ벿��
//	int i = 1;
//	for (i = 1; i < n; ++i){
//		PrintLine(n-i,2*i-1);
//	}
//	//��ӡ�м䲿��
//	PrintLine(0, 2 * n - 1);
//	//��ӡ�°벿��
//	for (i = n - 1; i > 0; --i){
//		PrintLine(n - i, 2 * i - 1);
//	}
//}
//int main(){
//	PrintLingXing(7);
//	system("pause");
//	return 0;
//}