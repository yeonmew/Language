/*
* 프로그램명: 문자배열과 포인터배열 연결
* 작성자: yeonmew
* 작성일: 2022.10.18
*/

#include <stdio.h>

int Sum(int num){  // 일반 함수
   int i, j = 0;
   
   for(i = 1; i <= num; i++) {
      j += i;
   }
    
   return j;
}

int RecursiveSum(int num){ // 재귀 함수
   int k=0;
   
   if (num == 1)
   return 1;
   
   else
   return num + RecursiveSum(num-1); // 재귀 함수 호출
}

int main(void){
   int num;
   
   printf("Input N:");
   scanf("%d", &num); // 입력받은 N을 num에 저장
   
   printf("Sum: %d \n",Sum(num)); 
   printf("RecursiveSum: %d", RecursiveSum(num));
   
   return 0;
}
