#include<stdio.h>
#include<windows.h>

int main(void) {
	// �ڱ�Ұ�
	printf("%s", "�ȳ��ϼ���! \n���� ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // ���ڻ� ����
	printf("%d", 2022);
	printf("%s", "yeonmew " );
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("%s", "�Դϴ�.\n");
	
	printf("%s", "\n ���� \n");
	
	return 0;
}