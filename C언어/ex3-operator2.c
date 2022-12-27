/*
* 프로그램명: 커피 구매 후 잔액
* 작성자: yeonmew
* 작성일:2022-09-16
*/

#include <stdio.h>

int main(void) {
	int money;//투입액

	printf("%s", "돈을 입력하세요: ");
	scanf_s("%d", &money);
	money -= 150; //커피한잔 구매
	//잔돈 개수
	printf("%s" "%d" "%s\n", "500원짜리 동전 ", (money / 500), "개");
	money = money % 500;
	printf("%s" "%d" "%s\n", "100원짜리 동전 ", (money / 100), "개");
	money = money % 100;
	printf("%s" "%d" "%s\n", "50원짜리 동전 ", (money / 50), "개");
	money = money % 50;
	printf("%s" "%d" "%s\n", "10원짜리 동전 ", (money / 10), "개");	

	return 0;
}