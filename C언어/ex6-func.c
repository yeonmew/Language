/*
 * ���α׷���: 2�� �迭�� ����
 * �ۼ���: yeonmew
 * �ۼ���: 2022.11.15
 */

#include <stdio.h>

void menu_disp() { //�޴� ����ϴ� �Լ�
    printf("==========< �޴� > ==========\n\n");
    printf("1. ���� (addition)\n\n");
    printf("2. ����(subtraction)\n\n");
    printf("3. ����(multiplication)\n\n");
    printf("4. ������(division)\n\n");
    printf(">> ���ϴ� �޴��� �����ϼ��� : ");
}
double add(double a, double b) { //����
    return (a + b);
}
double sub(double a, double b) { //����
    return (a - b);
}
double mul(double a, double b) { //����
    return (a * b);
}
double div(double a, double b) { //������
    return (a / b);
}
void res_disp(double result) { //��Ģ���� ��� ���
    printf("\n������� %lf�Դϴ�.", result);
}

int main(void) {
    int num;
    double x, y, re = 0;

    menu_disp();
    scanf_s("%d", &num);

    switch (num) {
    case 1:
        printf("�� ���� ���ڸ� �Է��ϼ���: ");
        scanf_s("%lf""%lf", &x, &y);
        if (x == 0 || y == 0) {
            printf("[����]0���� ���� �� �����ϴ�.");
            exit(1);
        }
        else
            re = add(x, y);
        break;

    case 2:
        printf("�� ���� ���ڸ� �Է��ϼ���: ");
        scanf_s("%lf""%lf", &x, &y);
        if (x == 0 || y == 0) {
            printf("[����]0���� ���� �� �����ϴ�.");
            exit(1);
        }
        else
            re = sub(x, y);
        break;

    case 3:
        printf("�� ���� ���ڸ� �Է��ϼ���: ");
        scanf_s("%lf""%lf", &x, &y);
        if (x == 0 || y == 0) {
            printf("[����]0���� ���� �� �����ϴ�.");
            exit(1);
        }
        else
            re = mul(x, y);
        break;

    case 4:
        printf("�� ���� ���ڸ� �Է��ϼ���: ");
        scanf_s("%lf""%lf", &x, &y);
        if (x  == 0 || y == 0) {
            printf("[����]0���� ���� �� �����ϴ�.");
            exit(1);
        }
        else
            re = div(x, y);
        break;

    default:
        printf("[����]�޴��� �߸� �Է��Ͽ����ϴ�.");
        exit(1);
    }
    res_disp(re);
    return 0;
}