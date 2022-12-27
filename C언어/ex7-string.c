/*
 * 프로그램명: ID 생성 규칙에 맞는지 확인하는 프로그램
 * 작성자: yeonmew
 * 작성일: 2022.11.28
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int id, len = 0, sp = 0, al = 0, err = 0;
    bool num = false;
    
    printf("New ID: ");

    while (1)
    {
        id = getchar(); // 한 글자씩 입력받아 판단하기
        if (id == '\n') //문자열의 끝에 다다르면 break
            break;

        if (id == '#' || id == '$' || id == '%' || id == '&')
            sp++; // 특수문자가 없으면 sp = 0

        int a = isalpha(id); //대문자 1 소문자 2를 a에 대입 아니면 0
        else if (a == 1 || a == 2)
            al++; // 영어문자가 없으면 al = 0

        int b = isdigit(id); //숫자가 아니면 0리턴
        if (b != 0)
            num++; // 숫자가 없으면 num = 0

        len++; //문자열의 길이 판단
    }

    if (num == 0)
        printf("숫자 1문자 이상 포함되어야 합니다.\n");
    if (len < 8 || len > 12)
        printf("허용된 길이가 아닙니다(8~12자).\n");
    if (sp == 0)
        printf("특수문자(# $ %% &) 중 1문자 이상 포함되어야 합니다.\n");
    if (al == 0)
        printf("영문자(대소문자) 1문자 이상 포함되어야합니다.\n");
    if (err != 0)
        printf("허락되지 않은 문자가 포함되어 있습니다.\n");
    if (num > 0 && sp > 0 && len >= 8 && len <= 12 && al > 0)
        printf("사용할 수 있는 ID 입니다.\n");

    return 0;
}