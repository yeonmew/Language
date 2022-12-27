/*
 * 프로그램명: 서로 다른 수열 생성 및 정렬
 * 작성자: yeonmew
 * 작성일: 2022.10.31
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrB[5]; // 정렬 이전 배열

void randArray(int*arrA)
{
    int i, j;

    srand((unsigned)time(NULL)); // 서로 다른 수열, 시간별로 다른 시드 생성으로 난수

    for (i = 0; i < 5; i++){
        arrA[i] = rand() % 5 + 1;

        for (j = 0; j < i; j++){
            if (arrA[i] == arrA[j]){
                i--;
            }
        }
        arrB[i] = arrA[i]; // 정렬 전 배열
    }
}
void sortArray(int *arrA){
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
}

void printArray(int *arrA){
    int i;

    printf("Array: [ "); //정렬 전 배열 출력
    for (i = 0; i < 5; i++){
        printf("%d ", arrB[i]);
    }
    printf("]\n");

    printf("Sort: [ "); //정렬 후 배열 출력
    for (i = 0; i < 5; i++){
        printf("%d ", arrA[i]);
    }
    printf("]\n");
}

int main(void){
    int arr[5];
    int *arrA = arr;
    randArray(arrA); // 배열 함수 호출
    sortArray(arrA); // 정렬 함수 호출
    printArray(arrA); //print함수 호출

    return 0;
}