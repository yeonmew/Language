/*
* 프로그램명: 배열을 인자로 하여 배열 생성 및 출력, 최소수 리턴함수
* 작성자: yeonmew
* 작성일: 2022.11.1
*/

#include <stdio.h>

void genArray(double *arrA){ // 입력 받기
int i;

for(i = 0; i < 5; i++){ //배열 입력
printf("Input %dth value: ", i+1);
scanf("%lf", &arrA[i]);
}

printf("genArray: [ "); // 배열 출력
for(i = 0; i < 5; i++){
printf("%.1lf ", arrA[i]);
}
printf("]\n");
}

double minArray(double *arrA){ //최소수 리턴
int i;
double min = arrA[0]; // 배열의 0번째 위치를 대입하고, 이후 순차 비교

for(i = 1; i < 5; i++){
if(arrA[i] < min){
    min = arrA[i];
}
}
return min; //최소수 리턴
/*
* 또는, 아래 중앙값 출력 함수로 배열이 정렬되기에 중앙값 출력 함수를 먼저 호출한 뒤 최소수 함수를 호출한다면,
    double minArray(double *arrA){
        int i;
        double min;
        min = arrA[0];
        return min;
        }
* 으로도 최소수 간단히 리턴 가능
*/
}

double middleArray(double *arrA){ // 중앙값 출력
    int i, j, tmp;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            if (arrA[j] > arrA[j + 1]){ // 위치 바꾸기
                tmp = arrA[j];
                arrA[j] = arrA[j + 1];
                arrA[j + 1] = tmp;
            }
        }
    }
    return arrA[2];
}

int main(void){
    double ary[5];
    double*arrA = ary;

    genArray(arrA); // 배열 입력받는 함수 호출
    printf("Middle value: %.1lf\n", middleArray(arrA)); // 중앙값 함수 호출
    printf("Min value: %.1lf\n", minArray(arrA)); // 최소수 함수 호출

    return 0;
}