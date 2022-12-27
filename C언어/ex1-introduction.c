#include<stdio.h>
#include<windows.h>

int main(void) {
	// 자기소개
	printf("%s", "안녕하세요! \n저는 ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 글자색 변경
	printf("%d", 2022);
	printf("%s", "yeonmew " );
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("%s", "입니다.\n");
	
	printf("%s", "\n 내용 \n");
	
	return 0;
}