/*
 * 프로그램명: 포인터배열에 저장된 문자열 출력
 * 작성자: yeonmew
 * 작성일: 2022.11.20
 */

#include <stdio.h>

void str_prn(char **ptr_ary, int count){  //포인터배열에 저장된 문자열 출력
    int i;
    for(i = 0; i < count; i++){ //배열의 크기만큼 반복 출력
    printf("%s\n", ptr_ary[i]);
    }
}

int main(){
    char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};
    int count;

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); //배열의 크기

    str_prn(ptr_ary, count);
    /* 함수로 바뀐 부분
    for (i = 0; i < count; i++){
        printf("%s\n", spp[i]);
    }
    */

    return 0;
}