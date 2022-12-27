/*
* 프로그램명: 2차배열 정수 홀,짝 출력
* 작성자: yeonmew
* 작성일: 2022.11.14
*/
#include<stdio.h>

void ShowOdd(int *arr, int len){
    printf("홀수 출력(%d개): ", len);
    for(int i = 0; i < len; i++){
        if (*(arr+10+i) == *(arr+10+len-1)) // 배열의 마지막 숫자라면 ,가 출력되지 않도록
            printf("%d", *(arr+10+len-1));

        else
        printf("%d, ", *(arr+10+i));
    }
    printf("\n");
}

void ShowEven(int *arr, int len){
    printf("짝수 출력(%d개): ", len);
    for(int i = 0; i < len; i++){
        if (*(arr+i) == *(arr+len-1))// 배열의 마지막 숫자라면 ,가 출력되지 않도록
            printf("%d", *(arr+len-1));

        else
        printf("%d, ", *(arr+i));
    }
    printf("\n");
}

int main(void){
    int i = 0, j = 0, k, num, arr[2][10];

    printf("총 10개의 숫자 입력\n");

    for(k = 0; k < 10; k++){
    printf("입력: ");
    scanf("%d", &num);

    if (num % 2 != 0){ // 홀수 
    arr[1][i] = num;
    ++i; //저장 위치 옮기기
    }

    else if (num % 2 == 0){ // 짝수 
    arr[0][j] = num;
    ++j; //저장 위치 옮기기
    }
    }

    ShowOdd((int*)arr, i);
    ShowEven((int*)arr, j);

    return 0;
}