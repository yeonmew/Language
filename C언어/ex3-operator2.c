/*
* ���α׷���: Ŀ�� ���� �� �ܾ�
* �ۼ���: yeonmew
* �ۼ���:2022-09-16
*/

#include <stdio.h>

int main(void) {
	int money;//���Ծ�

	printf("%s", "���� �Է��ϼ���: ");
	scanf_s("%d", &money);
	money -= 150; //Ŀ������ ����
	//�ܵ� ����
	printf("%s" "%d" "%s\n", "500��¥�� ���� ", (money / 500), "��");
	money = money % 500;
	printf("%s" "%d" "%s\n", "100��¥�� ���� ", (money / 100), "��");
	money = money % 100;
	printf("%s" "%d" "%s\n", "50��¥�� ���� ", (money / 50), "��");
	money = money % 50;
	printf("%s" "%d" "%s\n", "10��¥�� ���� ", (money / 10), "��");	

	return 0;
}