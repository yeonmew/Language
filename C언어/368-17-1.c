/*
* 프로그램명: 이중 포인터 변수로 최대, 최솟값 출력
* 작성자: yeonmew
* 작성일: 2022.11.21
*/

#include<stdio.h>

void MaxAndMin(int **maxPtr, int **minPtr){ //Max, Min값을 출력하는 함수

    printf("Max: %d\nMin: %d\n",**maxPtr,**minPtr);
}

int main(void){
    int max, min, i;
    int*maxPtr = &max; //포인터
    int*minPtr = &min;
    int **maxDPtr = &maxPtr; //이중 포인터
    int **minDPtr = &minPtr;

    int arr[5];

    printf("5개의 정수 입력: "); //5개의 정수를 입력받아 배열에 삽입
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i = 0; i < 5; i++){
    if(max < arr[i]) //현재 max값보다 arr[i]값이 더 크면, 값 대입
    max = arr[i];

    if(min > arr[i]) //현재 min값보다 arr[i]값이 더 크면, 값 대입
    min = arr[i];
    }
    
    MaxAndMin(maxDPtr, minDPtr);

    return 0;
}