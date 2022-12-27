/*
 * 프로그램명: 중복제거 및 대문자로 변경
 * 작성자: yeonmew
 * 작성일: 2022.11.30
 */

#include <stdio.h>
#include <string.h>

int main(void){
    int index = 0, count;
    char strin[10], strout[10] = "";

    printf("Input key : ");
    scanf("%s", &strin);

    for(int i = 0; strin[i]; i++){ //대문자로 변환
    if((strin[i]>='a')&&(strin[i]<='z')){ 
            strin[i] = strin[i]-'a'+'A';
        }
    }

    for (int i = 0; i < strlen(strin); i++){ // 크기만큼 반복
        count = 0; // 중복 여부 확인

        for (int j = 0; j < strlen(strout); j++){
            if (strin[i] == strout[j]){ // 중복인 경우 ++           
                count++;
            }
        }

        if (count == 0){ // 중복이 없으면 output에 대입
            strout[index] = strin[i];
            index++;
        }
    }

    printf("Output key : %s\n", strout);

    return 0;
}