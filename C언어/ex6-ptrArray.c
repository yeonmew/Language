/*
 * 프로그램명: 2차 배열의 곱셈
 * 작성자: yeonmew
 * 작성일: 2022.11.6
 */

#include <stdio.h>

void mul(int (*arrA)[3], int (*arrB)[3], int (*arrC)[3]){ // 곱을 계산하는 함수
    int i, j, k;

    for (i = 0; i < 3; i++){

        for (j = 0; j < 3; j++){
            arrC[i][j] = 0;

            for (k = 0; k < 3; k++){ // 자리별로 계산
                arrC[i][j] += arrA[i][k] * arrB[k][j]; 
            }
        }
    }
}

void result(int (*arrA)[3], int (*arrB)[3], int (*arrC)[3]){ // 결과를 출력하는 함수
    int i, j;

    for (i = 0; i < 3; i++){
        printf("|");

        for (j = 0; j < 3; j++){ // arrA 출력
            printf(" %d ", arrA[i][j]);
        }
        printf("|");

        if(i == 1)
        printf(" * ");
        else
        printf("   ");
        
        printf("|");
        for (j = 0; j < 3; j++){ // arrB 출력
            printf(" %d ", arrB[i][j]);
        }
        printf("|");
        
        if(i == 1)
        printf(" = ");
        else
        printf("   ");

        printf("|");
        for (j = 0; j < 3; j++){ // arrC 출력
            printf(" %d ", arrC[i][j]);
        }
        printf("|\n");
    }
}

int main(void){
    int arr1[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int arr2[3][3] = {{2, 2, 2}, {2, 2, 2}, {3, 3, 3}};
    int arr3[3][3];

    mul(arr1, arr2, arr3);
    result(arr1, arr2, arr3);
    return 0;
}