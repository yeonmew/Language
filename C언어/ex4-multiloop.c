/*
* ���α׷���: ������ ���1
* �ۼ���: yeonmew
* �ۼ���:2022-09-13
*/

#include <stdio.h>

int main(void) {
	int i, j, result;

	for (i = 1; i < 10; i++){

		for (j = 2; j <= 8; ){ //������ 2, 5, 8 ���
			result = i * j;
			printf("%d * %d = %d  ", j, i, result);
			j += 3; //2>5>8
		}
		printf("\n");
	}
	return 0;
}