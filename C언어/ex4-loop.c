/*
* 프로그램명: 별 화살표
* 작성자: yeonmew
* 작성일:2022-09-26
*/

#include <stdio.h>

int main(void) {
	int num, i, j, k, a;
		printf("행의 수를 입력하시오: ");
		scanf_s("%d", &num);

		if (num <= 10) {
			a = num;
			for (i = 0; i < num; i++) { //화살
				for (j = a - 1; j > 0; j--) { //공백
					printf(" ");
				}
				for (k = 0; k < i * 2 + 1; k++) { //별표
					printf("*");
				}
				printf("\n");

				a -= 1; //공백의 수 점차 줄이기
			}

			for (i = 0; i < num / 2; i++) { //기둥
				for (j = 0; j < num / 2 + num % 2; j++) { //공백
					printf(" ");
				}
				for (k = 0; k < num / 2 * 2 - 1; k++) { //별표
					printf("*");
				}
				printf("\n");
			}
		}
		else {
			num %= 10;
			a = num;
			for (i = 0; i < num; i++) { //화살
				for (j = a - 1; j > 0; j--) { //공백
					printf(" ");
				}
				for (k = 0; k < i * 2 + 1; k++) { //별표
					printf("*");
				}
				printf("\n");

				a -= 1;
			}

			for (i = 0; i < num / 2; i++) { //기둥
				for (j = 0; j < num / 2 + num % 2; j++) { //공백
					printf(" ");
				}
				for (k = 0; k < num / 2 * 2 - 1; k++) { //별표
					printf("*");
				}
				printf("\n");
			}
		}
	}
