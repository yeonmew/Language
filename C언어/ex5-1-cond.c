/*
* ���α׷���: Ȧ����/¦���� ������
* �ۼ���: yeonmew
* �ۼ���:2022-09-30
*/

#include<stdio.h>

int main(void) {
	int i, j, count, num=0, case_num; //�ݺ���, ������ ����, �ݺ� Ƚ��, ���̽���ȣ

		printf("��������� ��ȣ�� �Է��Ͻÿ�.\n");
		printf("(1:���, 2:¦����, 3:Ȧ����): ");
		scanf_s("%d", &case_num);//���̽���ȣ �Է¹ޱ�

		switch (case_num) {
		case 1: //���
			for(i = 2; i <= 9; i++){
				if (i % 2 == 0) { //¦���� ���
					count = 2;
					for (j = 2; j <= i; j++) {
						printf("%d * %d = %d", i, count, i * count);
						printf("\n");
						count += 2;
						j += 1;
						num += 1;
					}
				}
				else { //Ȧ���� ���
					count = 1;
					for (j = 1; j <= i; j++) { 

						printf("%d * %d = %d", i, count, i * count);
						printf("\n");
						count += 2;
						j += 1;
						num += 1;
					}
				}
				printf("\n");
			}
			printf("�ݺ��� ���� Ƚ��: %d", num);
			break;

		case 2: //¦����
			for (i = 2; i <= 9; i++) { 
				if (i % 2 == 0) { //¦���� ���
					count = 2;
					for (j = 2; j <= i; j++) {
						printf("%d * %d = %d", i, count, i * count);
						printf("\n");
						count += 2;
						j += 1;
						num += 1;
					}
				}
				else //Ȧ���� ��� �ǳʶٱ�
					continue;
				printf("\n");
			}
				printf("�ݺ��� ���� Ƚ��: %d", num);
			break;

		case 3: //Ȧ����
			for (i = 2; i <= 9; i++) {
				if (i % 2 == 1) { //Ȧ���� ���
					count = 1;
					for (j = 1; j <= i; j++) {

						printf("%d * %d = %d", i, count, i * count);
						printf("\n");
						count += 2;
						j += 1;
						num += 1;
					}
				}
				else //¦���� ��� �ǳʶٱ�
					continue;
				printf("\n");
			}
			printf("�ݺ��� ���� Ƚ��: %d", num);
			break;

		default: //�� ��
			printf("��¹�ȣ�� �߸� �����̱���!");
	}
	return 0;
}