/*
* 프로그램명: 정수스택클래스 ver.operator redundancy
* 작성자: yeonmew
* 작성일: 2022-05-10
*/

#include<iostream>
using namespace std;


class Stack { 
private:
	int size;
	int* mem;
	int top_of_stack;


public:
	Stack(int s = 5) {
		cout << "2022-yeonmew" << endl; //실행결과에 학번-이름 출력
		size = s;
		top_of_stack = -1;
		mem = new int[size];
	}~Stack(); //소멸자
	Stack& push(int k);
	Stack& pop(int& y);
	bool is_full();
	bool is_empty();
	void PrintError(const char* msg);

	Stack& operator <<(int k) {
		push(k);
		return *this;
	}
	Stack& operator >>(int &y) {
		pop(y);
		return *this;
	}

	bool operator !() {
		return is_empty();
	}
	
};

Stack& Stack::push(int k) {
	top_of_stack += 1;
	if (is_full()) {
		top_of_stack -= 1;
		PrintError("Stack is Full\n");
		return *this;
	}
	else {
		mem[top_of_stack] = k; 
		return *this;
	}
}

Stack& Stack::pop(int& y) {
	if (is_empty()) {
		PrintError("Stack is Empty");
		return *this;
	}
	else
		y = mem[top_of_stack--];
	return *this;
}

bool Stack::is_full() {
	return top_of_stack >= size ? true : false;
}

bool Stack::is_empty() {
	return top_of_stack == -1 ? true : false;
}

void Stack::PrintError(const char* msg) {
	cout << msg;

}

Stack::~Stack() {
	delete mem;
}


int main(void) {
	int x;
	Stack stack;
	stack << 3 << 4 << 5 << 6 << 7 << 8 << 10; // 스택에 한 정수 푸시
	while (true) {
		if (!stack) break; // 스택 empty
		stack >> x; // 스택의 한 값 팝
		cout << x << ' ';
	}
	cout << endl;
}