/*
* ���α׷���: �� ȭ��ǥ
* �ۼ���: yeonmew
* �ۼ���:2022-09-26
*/

#include <stdio.h>

int main(void) {
	int num, i, j, k, a;
		printf("���� ���� �Է��Ͻÿ�: ");
		scanf_s("%d", &num);

		if (num <= 10) {
			a = num;
			for (i = 0; i < num; i++) { //ȭ��
				for (j = a - 1; j > 0; j--) { //����
					printf(" ");
				}
				for (k = 0; k < i * 2 + 1; k++) { //��ǥ
					printf("*");
				}
				printf("\n");

				a -= 1; //������ �� ���� ���̱�
			}

			for (i = 0; i < num / 2; i++) { //���
				for (j = 0; j < num / 2 + num % 2; j++) { //����
					printf(" ");
				}
				for (k = 0; k < num / 2 * 2 - 1; k++) { //��ǥ
					printf("*");
				}
				printf("\n");
			}
		}
		else {
			num %= 10;
			a = num;
			for (i = 0; i < num; i++) { //ȭ��
				for (j = a - 1; j > 0; j--) { //����
					printf(" ");
				}
				for (k = 0; k < i * 2 + 1; k++) { //��ǥ
					printf("*");
				}
				printf("\n");

				a -= 1;
			}

			for (i = 0; i < num / 2; i++) { //���
				for (j = 0; j < num / 2 + num % 2; j++) { //����
					printf(" ");
				}
				for (k = 0; k < num / 2 * 2 - 1; k++) { //��ǥ
					printf("*");
				}
				printf("\n");
			}
		}
	}
