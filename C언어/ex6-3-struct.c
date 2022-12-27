/*
* 프로그램명: 로봇 시력 교정
* 작성자: yeonmew
* 작성일: 2022.12.04
*/
#include<stdio.h>

enum status {normal, abnormal, fixed};

struct vision{ //시력 구조체
double left;
double right;
enum status st;
};

void tmp(struct vision *v, double left, double right){ //바뀐 로보트의 시력 함수
    //*v로 call by reference하여 실제 주소값으로 가서 변경
    double tmp;
    tmp = v->left;
    v->left = v->right;
    v->right = tmp;
}

int main(void){
    int n = 0, a = 0, f = 0; //normal, abnormal, fixed
    struct vision v[5]; //로봇의 시력 

    for(int i = 0; i < 5; i++){
        printf("[%d]로보트의 시력을 입력하세요(좌 우): ",i+1);
        scanf("%lf %lf",&v[i].left, &v[i].right);
        
        if (v[i].left < v[i].right){
            v[i].st == normal;
            n +=1;
            printf("로보트의 시력(좌,우): %.1lf,%.1lf\n", v[i].left, v[i].right);
        }
        else if(v[i].left >= v[i].right){
            v[i].st == abnormal;

            tmp(&v[i], v[i].left, v[i].right); //왼쪽 시력 >= 오른쪽 시력인 경우에 바꾸는 함수 실행
            f +=1;
            printf("바뀐 로보트의 시력(좌,우): %.1lf,%.1lf\n", v[i].left, v[i].right);
        }
    }

    printf("normal robot %d, abnormal robot %d, fixed robot %d", n, a, f);

    return 0;
}