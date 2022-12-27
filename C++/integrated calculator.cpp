/*
* 프로그램명: 통합계산기
* 작성자: yeonmew
* 작성일: 2022-04-04
*/

#include <iostream>
using namespace std;

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

double Div(int x, int y) //double형으로 실수를 연산합니다.
{
	std::cout << fixed;
	std::cout.precision(6); //소수점 이하를 6자리로 고정합니다.
	return (double)x / y;

}


int main(void)
{ //통합계산기 프로그램입니다.
	std::cout << "====================================================" << endl;
	std::cout << "    이 프로그램은 통합계산기 프로그램입니다." << endl;
	std::cout << "    통합계산기는 다음을 할 수 있습니다." << endl;
	std::cout << "    1. 정수의 사칙연산\n    2. 섭씨 <-> 화씨 온도 변환\n    3. 비만도 계산" << endl;
	std::cout << "====================================================" << endl;
	std::cout << " 학번 : 2022    이름 : yeonmew" << endl;
	std::cout << "======================================" << endl;
	std::cout << "    1을 누르면 정수의 사칙연산을" << endl;
	std::cout << "    2를 누르면 섭씨화씨 온도 변환을\n";
	std::cout << "    3을 누르면 비만도 계산을 선택하게 됩니다." << endl;
	std::cout << "    q를 누르면 통합계산 프로그램을 종료하게 됩니다." << endl;
	std::cout << "====================================================" << endl;
	while (1) {
	std::cout << "\n    무엇을 선택하시겠습니까(1 / 2 / 3 / q) ?";
	char s; // (select) 선택문의 숫자나 문자를 받을 변수입니다.
	int num = 1;
		std::cin >> s;
		if (s == '1') { //사칙연산계산기입니다.
			std::cout << "=======================\n사칙연산계산기입니다.\n=======================" << endl;
			std::cout << "두 정수를 입력한 후, 연산자를 입력하세요." << endl;

			int a, b;
			char o; // (operator) char형으로 연산자를 받습니다.
			while (num != 0)
			{
				std::cout << "첫번째 정수를 입력하시오 ! ";
				std::cin >> a;
				if (!cin)
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n'); /*문자가 입력되면 모두 읽어들여 버리고, 
											   엔터 입력 시 엔터를 마지막으로 읽어들여 버리고 함수가 종료됩니다.*/
				}
				else {
					break;
				}
			}
			while (num != 0)
			{
				std::cout << "두번째 정수를 입력하시오 ! ";
				std::cin >> b;
				if (!cin)
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
				else {
					break;
				}
			}
			while (num != 0)
			{
			std::cout << "연산자를 입력하시오 ! (+, -, *, / 중 하나) ";
			std::cin >> o;

			if (o == '+') {
				std::cout << "결과는 " << Add(a, b) << "입니다." << std::endl;
				break;
			}
			else if (o == '-') {
				std::cout << "결과는 " << Sub(a, b) << "입니다." << std::endl;
				break;
			}
			else if (o == '*') {

				std::cout << "결과는 " << Mul(a, b) << "입니다." << std::endl;
				break;
			}
			else if (o == '/') {
				std::cout << "결과는 " << Div(a, b) << "입니다." << std::endl;
				break;
			}
			else if (!cin) {
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				/*지정한 연산자 + , -, *, / 가 아닌 다른 숫자나 문자가 입력되었을 때 모두 읽어들여 버리고,
				엔터 입력 시 엔터를 마지막으로 읽어들여 버리고 함수가 종료됩니다*/
			}
			}break;
		}

		else if (s == '2') {
			//섭씨<->화씨 온도 변환 프로그램입니다.
			std::cout << "==============================================" << endl;
			std::cout << "섭씨 <-> 화씨 온도 변환 프로그램입니다." << endl;
			std::cout << "==============================================" << endl;
			std::cout << "    1. 섭씨 온도 ==> 화씨 온도로 변환" << endl;
			std::cout << "    2. 화씨 온도 ==> 섭씨 온도로 변환" << endl;
			std::cout << "==============================================" << endl;
			std::cout << "    1을 누르면 섭씨 온도 ==> 화씨 온도로 변환을," << endl;
			std::cout << "    2를 누르면 화씨 온도 ==> 섭씨 온도로 변환하게 됩니다." << endl;
			std::cout << "==========================================================" << endl;
			while (1) {
			std::cout << "\n    무엇을 선택하시겠습니까?(1/2) ? ";

			double farenheit; //화씨온도입니다.
			double celcius; //섭씨온도입니다.
			
				std::cin >> s;
				if (s == '1') {
					while (num != 0)
					{
					std::cout << "\n    섭씨 온도 ==> 화씨 온도로 변환을 선택하였습니다." << endl;
					std::cout << "    섭씨 온도를 입력해 주세요 ! ";
						std::cin >> celcius;
						if (!cin)
						{
							cin.clear();
							cin.ignore(INT_MAX, '\n');
						}
						else {
							break;
						}
					}
						farenheit = (9.0 / 5.0) * celcius + 32.0;
						std::cout << "\n    변환 온도는 " << farenheit << "입니다" << endl;
						break;
				}
				else if (s == '2') {
					while (num != 0)
					{
					std::cout << "\n    화씨 온도 ==> 섭씨 온도로 변환을 선택하였습니다." << endl;
					std::cout << "    화씨 온도를 입력해 주세요 ! ";
						std::cin >> farenheit;
						if (!cin)
						{
							cin.clear();
							cin.ignore(INT_MAX, '\n');
						}
						else {
							break;
						}
					}
					celcius = (farenheit - 32) * (5.0 / 9.0);
					std::cout << "\n    변환 온도는 " << celcius << "입니다" << endl;
					break;
				}
				else  {
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					std::cout << "\n";
					continue;
				}
			}break;
		}

		else if (s == '3') { //비만도 계산 프로그램입니다.
			std::cout << "==============================================" << endl;
			std::cout << "      비만도 계산 프로그램입니다." << endl;
			std::cout << "==============================================" << endl;
			std::cout << "       키와 체중 자료가 필요합니다." << endl;
			std::cout << "\n       키는 미터(m) 단위로 입력하세요 (예: 1.86m)" << endl;
			std::cout << "       체중은 킬로그램(g) 단위로 입력하세요 (예: 41.2)" << endl;
			std::cout << "==========================================================" << endl;
			double m;
			double kg;
			double bmi;
			while (num != 0)
			{
				std::cout << "\n            키를 소수점아래 2자리까지 입력하시오 (예: 1.86m) ! ";
				cin >> m;
				if (!cin)
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}
				else {
					break;
				} 
			} 
			while (num != 0)
			{
				std::cout << "\n            몸무게를 입력하시오 (예: 41.2) ! ";
			cin >> kg;
			if (!cin)
			{
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
			else {
				break;
			}
			} 
			bmi = kg / m;
			std::cout << "\n\n            BMI : "<< bmi << " 입니다." << endl;
			break;
		} 

		else if (s == 'q') { //프로그램을 종료합니다.
		exit(0);
		}

		else  { // 1, 2, 3, q 이외에 다른 문자 입력 시 무시합니다.
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			std::cout << "\n";
			continue;
		}
	}
}