/*
* 프로그램명: 10진수를 입력받아 16진수로 출력하기
* 작성자: yeonmew
* 작성일: 2022.10.19
*/
#include <stdio.h>

int main(void) {
    int num;

    printf("10진수 정수 입력: ");
    scanf_s("%d", &num);

    printf("16진수: %X \n", num);

    return 0;
}