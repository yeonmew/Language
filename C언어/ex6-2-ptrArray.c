/*
* 프로그램명: 문자배열과 포인터배열 연결
* 작성자: yeonmew
* 작성일: 2022.11.7
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    int i, longest = 0;
    char *res[1]; // 결과값
    char*ptray[5]; // 포인터 배열
    char animal[5][10] = {"dog","elephant","monkey","rabbit","tiger"}; //2차원 배열

    for(i = 0; i < 5; i++){
    ptray[i] = animal[i]; // 포인터 배열과 2차원 배열 연결
    }  

    for(i = 0; i < 5; i++ ){
        if (strlen(ptray[i]) > longest){
        longest = strlen(ptray[i]);
        res[0] = ptray[i]; // 가장 길이가 긴 문자열 저장
        }
    }

    printf("가장 이름이 긴 동물은: %s \n", res[0]);

    return 0;
}