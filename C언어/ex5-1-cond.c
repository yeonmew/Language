/*
* 프로그램명: 홀수단/짝수단 구구단
* 작성자: yeonmew
* 작성일:2022-09-30
*/

#include<stdio.h>

int main(void) {
	int i, j, count, num=0, case_num; //반복문, 구구단 숫자, 반복 횟수, 케이스번호

		printf("출력종류의 번호를 입력하시오.\n");
		printf("(1:모두, 2:짝수단, 3:홀수단): ");
		scanf_s("%d", &case_num);//케이스번호 입력받기

		switch (case_num) {
		case 1: //모두
			for(i = 2; i <= 9; i++){
				if (i % 2 == 0) { //짝수인 경우
					count = 2;
					for (j = 2; j <= i; j++) {
						printf("%d * %d = %d", i, count, i * count);
						printf("\n");
						count += 2;
						j += 1;
						num += 1;
					}
				}
				else { //홀수인 경우
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
			printf("반복문 수행 횟수: %d", num);
			break;

		case 2: //짝수단
			for (i = 2; i <= 9; i++) { 
				if (i % 2 == 0) { //짝수인 경우
					count = 2;
					for (j = 2; j <= i; j++) {
						printf("%d * %d = %d", i, count, i * count);
						printf("\n");
						count += 2;
						j += 1;
						num += 1;
					}
				}
				else //홀수인 경우 건너뛰기
					continue;
				printf("\n");
			}
				printf("반복문 수행 횟수: %d", num);
			break;

		case 3: //홀수단
			for (i = 2; i <= 9; i++) {
				if (i % 2 == 1) { //홀수인 경우
					count = 1;
					for (j = 1; j <= i; j++) {

						printf("%d * %d = %d", i, count, i * count);
						printf("\n");
						count += 2;
						j += 1;
						num += 1;
					}
				}
				else //짝수인 경우 건너뛰기
					continue;
				printf("\n");
			}
			printf("반복문 수행 횟수: %d", num);
			break;

		default: //그 외
			printf("출력번호를 잘못 누르셨군요!");
	}
	return 0;
}