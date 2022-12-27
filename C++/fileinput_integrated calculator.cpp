/*
* 프로그램명: 파일 입력 통합계산기
* 작성자: yeonmew
* 작성일: 2022-04-05
*/

#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int Add(int firstInteger, int secondInteger)
{
	return firstInteger + secondInteger;
}

int Sub(int firstInteger, int secondInteger)
{
	return firstInteger - secondInteger;
}

int Mul(int firstInteger, int secondInteger)
{
	return firstInteger * secondInteger;
}

double Div(int firstInteger, int secondInteger) //double형으로 실수를 연산합니다.
{
	std::cout << fixed;
	std::cout.precision(6); //소수점 이하를 6자리로 고정합니다.
	return (double)firstInteger / secondInteger;

}

int main()
{
	char choice;
	int firstInteger, secondInteger;
	char degreeMode;
	double degree;
	double m;
	double kg;
	char op;
	int num = 1;

	cout << "====================================================" << endl;
	cout << "    이 프로그램은 통합계산기 프로그램입니다." << endl;
	cout << "    통합계산기는 다음을 할 수 있습니다." << endl;
	cout << "    1. 정수의 사칙연산\n    2. 섭씨 <-> 화씨 온도 변환\n    3. 비만도 계산" << endl;
	cout << "====================================================" << endl;
	cout << " 학번 : 2022    이름 : yeonmew" << endl;
	cout << "====================================================" << endl;
	cout << "    실행 프로그램이 있는 폴더에 데이터파일을 준비해 주세요!" << endl;
	cout << "\n    데이터파일명은 calc.dat입니다." << endl;
	cout << "====================================================\n" << endl;
	cout << "    데이터파일 내부의 데이터 형식은 다음과 같습니다." << endl;
	cout << "    choice (1/2/3)   // 1이면 4칙연산, 2이면 온도변환, 그리고 3이면 비만도 계산." << endl;
	cout << "    i1, i2, op       // choice가 1일 경우 i1(첫번째 정수), i2(두번째 정수), op (4칙연산자(+,-,*,/ 중 하나))" << endl;
	cout << "    degreeMode(1/2) // choice가 2일 경우 degreeMode == 1이면 섭씨->화씨, degreeMode == 2이면 화씨->섭씨 변환" << endl;
	cout << "    degree   /// 변환 전 온도" << endl;
	cout << "    height, weight   // choice가 3인 경우, height와 weight는 미터와 킬로그램 단위로 입력하시오." << endl;
	cout << "========================================================================================================" << endl;
	ifstream fin; // 파일입력스트림 객체를 생성
	fin.open("calc.dat.txt"); // 파일 열기할 데이터 파일의 이름을 지정
	fin >> choice; // 이전 과제의 cin >> choice;
	cout << "choice" << choice << endl;
	ifstream ins("calc.dat.txt");

	if (!ins.is_open()) {
		cout << "데이터파일이 없다.";
		return 0;
	}

	if (choice == '1') {
		cout << " =======================" << endl;
		cout << " 사칙연산계산기입니다. " << endl;
		cout << " =======================" << endl;
		fin >> firstInteger >> secondInteger >> op;
		// cin >> firstInteger >> secondInteger >> op;
		cout << " 파일로 입력한 두 정수와 연산자는 다음과 같습니다. " << endl;
		cout << "   첫 번째 정수 : " << firstInteger << endl;
		if (!fin)
		{
			cout << "정수 입력에 정수가 아닌 수가 입력되었습니다.";
			exit(0);
		}
		cout << "   두 번째 정수 : " << secondInteger << endl;
		cout << "   사칙 연산자 : " << op << endl;
		while (1) {
			if (op == '+') {
				std::cout << "결과는 " << Add(firstInteger, secondInteger) << "입니다." << std::endl;
				break;
			}
			else if (op == '-') {
				cout << "결과는 " << Sub(firstInteger, secondInteger) << "입니다." << std::endl;
				break;
			}
			else if (op == '*') {

				cout << "결과는 " << Mul(firstInteger, secondInteger) << "입니다." << std::endl;
				break;
			}
			else if (op == '/') {
				cout << "결과는 " << Div(firstInteger, secondInteger) << "입니다." << std::endl;
				break;
			}
			else {
				cout << "사칙연산자가 아닌 연산자가 입력되었습니다.";
				exit(0);
			}
		}
	}
	else if (choice == '2') { //섭씨 <-> 화씨 온도 변환 프로그램입니다.
		cout << "==============================================" << endl;
		cout << "섭씨 <-> 화씨 온도 변환 프로그램입니다." << endl;
		cout << "==============================================" << endl;
		fin >> degreeMode >> degree;

		while (1) {
			if (degreeMode == '1') {
				cout << "\n     섭씨 온도 ==> 화씨 온도로 변환을 선택하였습니다." << endl;
				cout << "      파일로 입력한 섭씨 온도" << degree << endl;
				cout << "\n      변환 온도는 " << (9.0 / 5.0) * degree + 32.0 << " 입니다";
				break;
			}
			else if (degreeMode == '2') {
				cout << "\n     화씨 온도 ==> 섭씨 온도로 변환을 선택하였습니다." << endl;
				cout << "      파일로 입력한 화씨 온도" << degree << endl;
				cout << "\n      변환 온도는 " << (degree - 32.0) * (5.0 / 9.0) << " 입니다";
				break;
			}break;
		} 
	}
	else if (choice == '3') { //비만도 계산 프로그램입니다.
		fin >> m >> kg;
		cout << "==============================================" << endl;
		cout << "      비만도 계산 프로그램입니다." << endl;
		cout << "==============================================" << endl;
		cout << "\n\n\n\n      파일로 입력한 키와 몸무게는 다음과 같습니다." << endl;
		cout << "      키       : " << m << "m" << endl;
		cout << "      몸무게   : " << kg << "kg" << endl;
		cout << "\n    BMI  :  " << kg / ( m * m) << " 입니다";
	}
	fin.close(); // 데이터 파일의 입력이 모두 끝난 다음에 close합니다.
}