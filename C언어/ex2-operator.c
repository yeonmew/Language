/*
* ���α׷���: �µ� ��ư
* �ۼ���: yeonmew
* �ۼ���:2022-09-13
*/

#include <stdio.h>

int main(void) {
	int num; // ��ư����Ƚ��
	int temp = 1; //�µ�����

	printf("��ư����Ƚ�����Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	num %= 4;
	temp <<= num; 
	printf("�µ�����: ");
	printf("%d", temp);

	return 0;
}