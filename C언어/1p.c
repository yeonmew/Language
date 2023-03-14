/*
 * 프로그램명: 10진수를 입력받아 16진수로 출력하기
 * 작성자: yeonmew
 * 작성일: 2022.10.19
 */
#include <stdio.h>

int main(void)
{
    char str[10] = "mew";
    for (int i = 0; i < sizeof(str); i++)
    {
        printf("%c\n", str[i]);
    }
}