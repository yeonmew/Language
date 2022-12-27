/*
* 프로그램명: 온도 버튼
* 작성자: yeonmew
* 작성일:2022-09-13
*/

#include <stdio.h>

int main(void) {
	int num; // 버튼누른횟수
	int temp = 1; //온도상태

	printf("버튼누른횟수를입력하시오: ");
	scanf_s("%d", &num);
	num %= 4;
	temp <<= num; 
	printf("온도상태: ");
	printf("%d", temp);

	return 0;
}