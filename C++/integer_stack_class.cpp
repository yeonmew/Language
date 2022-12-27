/*
* 프로그램명: 정수스택클래스 ver.funtion
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
		cout << "2022-yeonmew" << endl;
		size = s;
		top_of_stack = -1;
		mem = new int[size];
	}
	~Stack();
	Stack& push(int k);
	Stack& pop(int &y);
	int is_full();
	int is_empty();
	void PrintError(const char* msg);
};

Stack&Stack::push(int k) {
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

Stack&Stack::pop(int &y) {
	if (is_empty()) {
		PrintError("Stack is Empty");
		return *this;
	}
	else
		y = mem[top_of_stack--];
	return *this;
}

int Stack::is_full() {
	return top_of_stack >= size ? true : false;
}

int Stack::is_empty() {
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
	stack.push(3); // 스택에 한 정수 푸시
	stack.push(4);
	stack.push(5);
	stack.push(6);
	stack.push(7);
	stack.push(8);
	stack.push(10);
	while (true) {
		if (stack.is_empty()) break; // 스택 empty
		stack.pop(x); // 스택의 한 값 팝
		cout << x << ' ';
	}
	cout << endl;
}