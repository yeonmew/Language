/*
 * 프로그램명: 2차 배열의 곱셈
 * 작성자: yeonmew
 * 작성일: 2022.11.15
 */

#include <stdio.h>

void menu_disp() { //메뉴 출력하는 함수
    printf("==========< 메뉴 > ==========\n\n");
    printf("1. 덧셈 (addition)\n\n");
    printf("2. 뺄셈(subtraction)\n\n");
    printf("3. 곱셈(multiplication)\n\n");
    printf("4. 나눗셈(division)\n\n");
    printf(">> 원하는 메뉴를 선택하세요 : ");
}
double add(double a, double b) { //덧셈
    return (a + b);
}
double sub(double a, double b) { //뺄셈
    return (a - b);
}
double mul(double a, double b) { //곱셉
    return (a * b);
}
double div(double a, double b) { //나눗셈
    return (a / b);
}
void res_disp(double result) { //사칙연산 결과 출력
    printf("\n결과값은 %lf입니다.", result);
}

int main(void) {
    int num;
    double x, y, re = 0;

    menu_disp();
    scanf_s("%d", &num);

    switch (num) {
    case 1:
        printf("두 개의 숫자를 입력하세요: ");
        scanf_s("%lf""%lf", &x, &y);
        if (x == 0 || y == 0) {
            printf("[오류]0으로 나눌 수 없습니다.");
            exit(1);
        }
        else
            re = add(x, y);
        break;

    case 2:
        printf("두 개의 숫자를 입력하세요: ");
        scanf_s("%lf""%lf", &x, &y);
        if (x == 0 || y == 0) {
            printf("[오류]0으로 나눌 수 없습니다.");
            exit(1);
        }
        else
            re = sub(x, y);
        break;

    case 3:
        printf("두 개의 숫자를 입력하세요: ");
        scanf_s("%lf""%lf", &x, &y);
        if (x == 0 || y == 0) {
            printf("[오류]0으로 나눌 수 없습니다.");
            exit(1);
        }
        else
            re = mul(x, y);
        break;

    case 4:
        printf("두 개의 숫자를 입력하세요: ");
        scanf_s("%lf""%lf", &x, &y);
        if (x  == 0 || y == 0) {
            printf("[오류]0으로 나눌 수 없습니다.");
            exit(1);
        }
        else
            re = div(x, y);
        break;

    default:
        printf("[오류]메뉴를 잘못 입력하였습니다.");
        exit(1);
    }
    res_disp(re);
    return 0;
}